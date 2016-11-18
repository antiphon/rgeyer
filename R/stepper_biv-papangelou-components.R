#' Compute the components of papangelou for the bivariate stepper model
#'
#' @param from coordinates of the data, third column 0/1 marks
#' @param to coordinate matrix for locations for evaluation of papangelou. Assumed to be different from 'from'
#' @param r alternative to K and R, the r vector itself. Increasing, 0 shouldn't be included.
#' @param bbox bounding box
#' @param dbg dbg level
#' @param toroidal >0 use toroidal distances
#'
#' @return Matrix with dimension (nrow(to), K) with
#' d_k(to_i|from) = 1( ne_k(to_i, from[!mark_i])>0) with ne_k(to_i, from[!mark_i]>0) = sum_j 1(mark_j!=mark_i)(r[k-1] < ||to_i - from_j|| < r[k])
#'
#' If 'to' is NULL, computes the components for 'from' locations, i.e. the papangelou for each data point.
#' @export
#' @useDynLib rgeyer


stepper_biv_components <- function(from, to, r, bbox, dbg=0, toroidal=0){
  if(missing(r)) r <- (1:K) * R /K
  if(is.null(to) | missing(to)){
    rstepper_biv_components_at_data_c(
      from,
      r,
      bbox,
      dbg,
      toroidal)
  }
  else{
  rstepper_biv_components_c(
    from,
    to,
    r,
    bbox,
    dbg,
    toroidal)
  }
}