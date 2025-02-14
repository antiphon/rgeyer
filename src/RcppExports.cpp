// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ribm_biv_c
NumericMatrix ribm_biv_c(NumericVector theta, NumericVector r, NumericMatrix bbox, int iter, NumericMatrix x0, int dbg, int toroidal);
RcppExport SEXP _rgeyer_ribm_biv_c(SEXP thetaSEXP, SEXP rSEXP, SEXP bboxSEXP, SEXP iterSEXP, SEXP x0SEXP, SEXP dbgSEXP, SEXP toroidalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    rcpp_result_gen = Rcpp::wrap(ribm_biv_c(theta, r, bbox, iter, x0, dbg, toroidal));
    return rcpp_result_gen;
END_RCPP
}
// rrelativestepper_m3_univ_c
NumericMatrix rrelativestepper_m3_univ_c(NumericVector theta, NumericVector r, NumericMatrix bbox, int iter, NumericMatrix x0, int dbg, int toroidal, List trend_im);
RcppExport SEXP _rgeyer_rrelativestepper_m3_univ_c(SEXP thetaSEXP, SEXP rSEXP, SEXP bboxSEXP, SEXP iterSEXP, SEXP x0SEXP, SEXP dbgSEXP, SEXP toroidalSEXP, SEXP trend_imSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    Rcpp::traits::input_parameter< List >::type trend_im(trend_imSEXP);
    rcpp_result_gen = Rcpp::wrap(rrelativestepper_m3_univ_c(theta, r, bbox, iter, x0, dbg, toroidal, trend_im));
    return rcpp_result_gen;
END_RCPP
}
// rrelativestepper_univ_c
NumericMatrix rrelativestepper_univ_c(NumericVector theta, NumericVector r, NumericMatrix bbox, int iter, NumericMatrix x0, int dbg, int toroidal, List trend_im);
RcppExport SEXP _rgeyer_rrelativestepper_univ_c(SEXP thetaSEXP, SEXP rSEXP, SEXP bboxSEXP, SEXP iterSEXP, SEXP x0SEXP, SEXP dbgSEXP, SEXP toroidalSEXP, SEXP trend_imSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    Rcpp::traits::input_parameter< List >::type trend_im(trend_imSEXP);
    rcpp_result_gen = Rcpp::wrap(rrelativestepper_univ_c(theta, r, bbox, iter, x0, dbg, toroidal, trend_im));
    return rcpp_result_gen;
END_RCPP
}
// rrelativestepper_univ_fixed_c
NumericMatrix rrelativestepper_univ_fixed_c(NumericVector n, NumericVector theta, NumericVector r, NumericMatrix bbox, int iter, NumericMatrix x0, int dbg, int toroidal, List trend_im);
RcppExport SEXP _rgeyer_rrelativestepper_univ_fixed_c(SEXP nSEXP, SEXP thetaSEXP, SEXP rSEXP, SEXP bboxSEXP, SEXP iterSEXP, SEXP x0SEXP, SEXP dbgSEXP, SEXP toroidalSEXP, SEXP trend_imSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    Rcpp::traits::input_parameter< List >::type trend_im(trend_imSEXP);
    rcpp_result_gen = Rcpp::wrap(rrelativestepper_univ_fixed_c(n, theta, r, bbox, iter, x0, dbg, toroidal, trend_im));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_biv_c
NumericMatrix rstepper_biv_c(NumericVector theta, NumericVector r, NumericMatrix bbox, int iter, NumericMatrix x0, int dbg, int toroidal);
RcppExport SEXP _rgeyer_rstepper_biv_c(SEXP thetaSEXP, SEXP rSEXP, SEXP bboxSEXP, SEXP iterSEXP, SEXP x0SEXP, SEXP dbgSEXP, SEXP toroidalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_biv_c(theta, r, bbox, iter, x0, dbg, toroidal));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_multi_c
NumericMatrix rstepper_multi_c(NumericVector theta0, List theta1_list, List theta2_list, NumericMatrix bbox, int iter, NumericMatrix x0, int dbg, int toroidal, List trend_ims);
RcppExport SEXP _rgeyer_rstepper_multi_c(SEXP theta0SEXP, SEXP theta1_listSEXP, SEXP theta2_listSEXP, SEXP bboxSEXP, SEXP iterSEXP, SEXP x0SEXP, SEXP dbgSEXP, SEXP toroidalSEXP, SEXP trend_imsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< List >::type theta1_list(theta1_listSEXP);
    Rcpp::traits::input_parameter< List >::type theta2_list(theta2_listSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    Rcpp::traits::input_parameter< List >::type trend_ims(trend_imsSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_multi_c(theta0, theta1_list, theta2_list, bbox, iter, x0, dbg, toroidal, trend_ims));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_multi_fixed_c
NumericMatrix rstepper_multi_fixed_c(List theta1_list, List theta2_list, NumericMatrix bbox, int iter, NumericMatrix x0, int dbg, int toroidal, List trend_ims);
RcppExport SEXP _rgeyer_rstepper_multi_fixed_c(SEXP theta1_listSEXP, SEXP theta2_listSEXP, SEXP bboxSEXP, SEXP iterSEXP, SEXP x0SEXP, SEXP dbgSEXP, SEXP toroidalSEXP, SEXP trend_imsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type theta1_list(theta1_listSEXP);
    Rcpp::traits::input_parameter< List >::type theta2_list(theta2_listSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    Rcpp::traits::input_parameter< List >::type trend_ims(trend_imsSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_multi_fixed_c(theta1_list, theta2_list, bbox, iter, x0, dbg, toroidal, trend_ims));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_univ_c
NumericMatrix rstepper_univ_c(NumericVector theta, NumericVector r, IntegerVector sat, NumericMatrix bbox, int iter, NumericMatrix x0, int dbg, int toroidal, List trend_im);
RcppExport SEXP _rgeyer_rstepper_univ_c(SEXP thetaSEXP, SEXP rSEXP, SEXP satSEXP, SEXP bboxSEXP, SEXP iterSEXP, SEXP x0SEXP, SEXP dbgSEXP, SEXP toroidalSEXP, SEXP trend_imSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sat(satSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    Rcpp::traits::input_parameter< List >::type trend_im(trend_imSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_univ_c(theta, r, sat, bbox, iter, x0, dbg, toroidal, trend_im));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_univ_fixed_c
NumericMatrix rstepper_univ_fixed_c(NumericVector n, NumericVector theta, NumericVector r, IntegerVector sat, NumericMatrix bbox, int iter, NumericMatrix x0, int dbg, int toroidal, List trend_im);
RcppExport SEXP _rgeyer_rstepper_univ_fixed_c(SEXP nSEXP, SEXP thetaSEXP, SEXP rSEXP, SEXP satSEXP, SEXP bboxSEXP, SEXP iterSEXP, SEXP x0SEXP, SEXP dbgSEXP, SEXP toroidalSEXP, SEXP trend_imSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sat(satSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    Rcpp::traits::input_parameter< List >::type trend_im(trend_imSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_univ_fixed_c(n, theta, r, sat, bbox, iter, x0, dbg, toroidal, trend_im));
    return rcpp_result_gen;
END_RCPP
}
// rtest_classes_c
NumericMatrix rtest_classes_c(NumericVector theta, NumericVector r, NumericMatrix bbox, int iter, NumericMatrix x0, int dbg, int toroidal);
RcppExport SEXP _rgeyer_rtest_classes_c(SEXP thetaSEXP, SEXP rSEXP, SEXP bboxSEXP, SEXP iterSEXP, SEXP x0SEXP, SEXP dbgSEXP, SEXP toroidalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    rcpp_result_gen = Rcpp::wrap(rtest_classes_c(theta, r, bbox, iter, x0, dbg, toroidal));
    return rcpp_result_gen;
END_RCPP
}
// rtest_classes_biv_c
NumericMatrix rtest_classes_biv_c(NumericVector theta, NumericVector r, NumericMatrix bbox, int iter, NumericMatrix x0, int dbg, int toroidal);
RcppExport SEXP _rgeyer_rtest_classes_biv_c(SEXP thetaSEXP, SEXP rSEXP, SEXP bboxSEXP, SEXP iterSEXP, SEXP x0SEXP, SEXP dbgSEXP, SEXP toroidalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    rcpp_result_gen = Rcpp::wrap(rtest_classes_biv_c(theta, r, bbox, iter, x0, dbg, toroidal));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_biv_components_c
NumericMatrix rstepper_biv_components_c(NumericMatrix from, NumericMatrix to, NumericVector r, IntegerVector sat, NumericMatrix bbox, int dbg, int toroidal);
RcppExport SEXP _rgeyer_rstepper_biv_components_c(SEXP fromSEXP, SEXP toSEXP, SEXP rSEXP, SEXP satSEXP, SEXP bboxSEXP, SEXP dbgSEXP, SEXP toroidalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type from(fromSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type to(toSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sat(satSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_biv_components_c(from, to, r, sat, bbox, dbg, toroidal));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_biv_components_at_data_c
NumericMatrix rstepper_biv_components_at_data_c(NumericMatrix from, NumericVector r, IntegerVector sat, NumericMatrix bbox, int dbg, int toroidal);
RcppExport SEXP _rgeyer_rstepper_biv_components_at_data_c(SEXP fromSEXP, SEXP rSEXP, SEXP satSEXP, SEXP bboxSEXP, SEXP dbgSEXP, SEXP toroidalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type from(fromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sat(satSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_biv_components_at_data_c(from, r, sat, bbox, dbg, toroidal));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_components_c
NumericMatrix rstepper_components_c(NumericMatrix from, NumericMatrix to, NumericVector r, IntegerVector sat, NumericMatrix bbox, int dbg, int toroidal);
RcppExport SEXP _rgeyer_rstepper_components_c(SEXP fromSEXP, SEXP toSEXP, SEXP rSEXP, SEXP satSEXP, SEXP bboxSEXP, SEXP dbgSEXP, SEXP toroidalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type from(fromSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type to(toSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sat(satSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_components_c(from, to, r, sat, bbox, dbg, toroidal));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_components_at_data_c
NumericMatrix rstepper_components_at_data_c(NumericMatrix from, NumericVector r, IntegerVector sat, NumericMatrix bbox, int dbg, int toroidal);
RcppExport SEXP _rgeyer_rstepper_components_at_data_c(SEXP fromSEXP, SEXP rSEXP, SEXP satSEXP, SEXP bboxSEXP, SEXP dbgSEXP, SEXP toroidalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type from(fromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sat(satSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_components_at_data_c(from, r, sat, bbox, dbg, toroidal));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_multi_log_papangelou_c
NumericVector rstepper_multi_log_papangelou_c(List theta1_list, List theta2_list, NumericMatrix from, NumericMatrix to, NumericMatrix bbox, int dbg, int toroidal);
RcppExport SEXP _rgeyer_rstepper_multi_log_papangelou_c(SEXP theta1_listSEXP, SEXP theta2_listSEXP, SEXP fromSEXP, SEXP toSEXP, SEXP bboxSEXP, SEXP dbgSEXP, SEXP toroidalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type theta1_list(theta1_listSEXP);
    Rcpp::traits::input_parameter< List >::type theta2_list(theta2_listSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type from(fromSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type to(toSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_multi_log_papangelou_c(theta1_list, theta2_list, from, to, bbox, dbg, toroidal));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_multi_log_papangelou_grid_c
NumericMatrix rstepper_multi_log_papangelou_grid_c(List theta1_list, List theta2_list, NumericMatrix from, NumericMatrix to, IntegerVector types, NumericMatrix bbox, int dbg, int toroidal);
RcppExport SEXP _rgeyer_rstepper_multi_log_papangelou_grid_c(SEXP theta1_listSEXP, SEXP theta2_listSEXP, SEXP fromSEXP, SEXP toSEXP, SEXP typesSEXP, SEXP bboxSEXP, SEXP dbgSEXP, SEXP toroidalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type theta1_list(theta1_listSEXP);
    Rcpp::traits::input_parameter< List >::type theta2_list(theta2_listSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type from(fromSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type to(toSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type types(typesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_multi_log_papangelou_grid_c(theta1_list, theta2_list, from, to, types, bbox, dbg, toroidal));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_multi_log_papangelou_at_data_c
NumericVector rstepper_multi_log_papangelou_at_data_c(List theta1_list, List theta2_list, NumericMatrix from, NumericMatrix bbox, int dbg, int toroidal);
RcppExport SEXP _rgeyer_rstepper_multi_log_papangelou_at_data_c(SEXP theta1_listSEXP, SEXP theta2_listSEXP, SEXP fromSEXP, SEXP bboxSEXP, SEXP dbgSEXP, SEXP toroidalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type theta1_list(theta1_listSEXP);
    Rcpp::traits::input_parameter< List >::type theta2_list(theta2_listSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type from(fromSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_multi_log_papangelou_at_data_c(theta1_list, theta2_list, from, bbox, dbg, toroidal));
    return rcpp_result_gen;
END_RCPP
}
// rstepper_log_papangelou_c
NumericVector rstepper_log_papangelou_c(NumericMatrix from, NumericMatrix to, NumericVector theta, NumericVector r, NumericVector sat, NumericMatrix bbox, int dbg, int toroidal);
RcppExport SEXP _rgeyer_rstepper_log_papangelou_c(SEXP fromSEXP, SEXP toSEXP, SEXP thetaSEXP, SEXP rSEXP, SEXP satSEXP, SEXP bboxSEXP, SEXP dbgSEXP, SEXP toroidalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type from(fromSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type to(toSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sat(satSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type dbg(dbgSEXP);
    Rcpp::traits::input_parameter< int >::type toroidal(toroidalSEXP);
    rcpp_result_gen = Rcpp::wrap(rstepper_log_papangelou_c(from, to, theta, r, sat, bbox, dbg, toroidal));
    return rcpp_result_gen;
END_RCPP
}
// rtest_im_c
NumericVector rtest_im_c(List im, NumericMatrix x);
RcppExport SEXP _rgeyer_rtest_im_c(SEXP imSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type im(imSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rtest_im_c(im, x));
    return rcpp_result_gen;
END_RCPP
}
// rtest_graph_c
List rtest_graph_c(NumericMatrix x0, NumericMatrix bbox, NumericVector r);
RcppExport SEXP _rgeyer_rtest_graph_c(SEXP x0SEXP, SEXP bboxSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(rtest_graph_c(x0, bbox, r));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rgeyer_ribm_biv_c", (DL_FUNC) &_rgeyer_ribm_biv_c, 7},
    {"_rgeyer_rrelativestepper_m3_univ_c", (DL_FUNC) &_rgeyer_rrelativestepper_m3_univ_c, 8},
    {"_rgeyer_rrelativestepper_univ_c", (DL_FUNC) &_rgeyer_rrelativestepper_univ_c, 8},
    {"_rgeyer_rrelativestepper_univ_fixed_c", (DL_FUNC) &_rgeyer_rrelativestepper_univ_fixed_c, 9},
    {"_rgeyer_rstepper_biv_c", (DL_FUNC) &_rgeyer_rstepper_biv_c, 7},
    {"_rgeyer_rstepper_multi_c", (DL_FUNC) &_rgeyer_rstepper_multi_c, 9},
    {"_rgeyer_rstepper_multi_fixed_c", (DL_FUNC) &_rgeyer_rstepper_multi_fixed_c, 8},
    {"_rgeyer_rstepper_univ_c", (DL_FUNC) &_rgeyer_rstepper_univ_c, 9},
    {"_rgeyer_rstepper_univ_fixed_c", (DL_FUNC) &_rgeyer_rstepper_univ_fixed_c, 10},
    {"_rgeyer_rtest_classes_c", (DL_FUNC) &_rgeyer_rtest_classes_c, 7},
    {"_rgeyer_rtest_classes_biv_c", (DL_FUNC) &_rgeyer_rtest_classes_biv_c, 7},
    {"_rgeyer_rstepper_biv_components_c", (DL_FUNC) &_rgeyer_rstepper_biv_components_c, 7},
    {"_rgeyer_rstepper_biv_components_at_data_c", (DL_FUNC) &_rgeyer_rstepper_biv_components_at_data_c, 6},
    {"_rgeyer_rstepper_components_c", (DL_FUNC) &_rgeyer_rstepper_components_c, 7},
    {"_rgeyer_rstepper_components_at_data_c", (DL_FUNC) &_rgeyer_rstepper_components_at_data_c, 6},
    {"_rgeyer_rstepper_multi_log_papangelou_c", (DL_FUNC) &_rgeyer_rstepper_multi_log_papangelou_c, 7},
    {"_rgeyer_rstepper_multi_log_papangelou_grid_c", (DL_FUNC) &_rgeyer_rstepper_multi_log_papangelou_grid_c, 8},
    {"_rgeyer_rstepper_multi_log_papangelou_at_data_c", (DL_FUNC) &_rgeyer_rstepper_multi_log_papangelou_at_data_c, 6},
    {"_rgeyer_rstepper_log_papangelou_c", (DL_FUNC) &_rgeyer_rstepper_log_papangelou_c, 8},
    {"_rgeyer_rtest_im_c", (DL_FUNC) &_rgeyer_rtest_im_c, 2},
    {"_rgeyer_rtest_graph_c", (DL_FUNC) &_rgeyer_rtest_graph_c, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_rgeyer(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
