// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// ProxL1
arma::colvec ProxL1(arma::colvec delta, int p, double lambda, arma::colvec weights);
RcppExport SEXP _clustRviz_ProxL1(SEXP deltaSEXP, SEXP pSEXP, SEXP lambdaSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(ProxL1(delta, p, lambda, weights));
    return rcpp_result_gen;
END_RCPP
}
// CARPL2_VIS_FRAC
Rcpp::List CARPL2_VIS_FRAC(arma::colvec x, int n, int p, double lambda_init, arma::colvec weights, arma::colvec uinit, arma::colvec vinit, Eigen::SparseMatrix<double> premat, arma::umat IndMat, arma::umat EOneIndMat, arma::umat ETwoIndMat, double rho, int max_iter, int burn_in, bool verbose, double back, double try_tol, int ti, double t_switch, int keep);
RcppExport SEXP _clustRviz_CARPL2_VIS_FRAC(SEXP xSEXP, SEXP nSEXP, SEXP pSEXP, SEXP lambda_initSEXP, SEXP weightsSEXP, SEXP uinitSEXP, SEXP vinitSEXP, SEXP prematSEXP, SEXP IndMatSEXP, SEXP EOneIndMatSEXP, SEXP ETwoIndMatSEXP, SEXP rhoSEXP, SEXP max_iterSEXP, SEXP burn_inSEXP, SEXP verboseSEXP, SEXP backSEXP, SEXP try_tolSEXP, SEXP tiSEXP, SEXP t_switchSEXP, SEXP keepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_init(lambda_initSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type uinit(uinitSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type vinit(vinitSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type premat(prematSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type IndMat(IndMatSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type EOneIndMat(EOneIndMatSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ETwoIndMat(ETwoIndMatSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type back(backSEXP);
    Rcpp::traits::input_parameter< double >::type try_tol(try_tolSEXP);
    Rcpp::traits::input_parameter< int >::type ti(tiSEXP);
    Rcpp::traits::input_parameter< double >::type t_switch(t_switchSEXP);
    Rcpp::traits::input_parameter< int >::type keep(keepSEXP);
    rcpp_result_gen = Rcpp::wrap(CARPL2_VIS_FRAC(x, n, p, lambda_init, weights, uinit, vinit, premat, IndMat, EOneIndMat, ETwoIndMat, rho, max_iter, burn_in, verbose, back, try_tol, ti, t_switch, keep));
    return rcpp_result_gen;
END_RCPP
}
// CARPL2_NF_FRAC
Rcpp::List CARPL2_NF_FRAC(arma::colvec x, int n, int p, double lambda_init, double t, arma::colvec weights, arma::colvec uinit, arma::colvec vinit, Eigen::SparseMatrix<double> premat, arma::umat IndMat, arma::umat EOneIndMat, arma::umat ETwoIndMat, double rho, int max_iter, int burn_in, bool verbose, int keep);
RcppExport SEXP _clustRviz_CARPL2_NF_FRAC(SEXP xSEXP, SEXP nSEXP, SEXP pSEXP, SEXP lambda_initSEXP, SEXP tSEXP, SEXP weightsSEXP, SEXP uinitSEXP, SEXP vinitSEXP, SEXP prematSEXP, SEXP IndMatSEXP, SEXP EOneIndMatSEXP, SEXP ETwoIndMatSEXP, SEXP rhoSEXP, SEXP max_iterSEXP, SEXP burn_inSEXP, SEXP verboseSEXP, SEXP keepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_init(lambda_initSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type uinit(uinitSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type vinit(vinitSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type premat(prematSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type IndMat(IndMatSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type EOneIndMat(EOneIndMatSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ETwoIndMat(ETwoIndMatSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type keep(keepSEXP);
    rcpp_result_gen = Rcpp::wrap(CARPL2_NF_FRAC(x, n, p, lambda_init, t, weights, uinit, vinit, premat, IndMat, EOneIndMat, ETwoIndMat, rho, max_iter, burn_in, verbose, keep));
    return rcpp_result_gen;
END_RCPP
}
// CARPL1_NF_FRAC
Rcpp::List CARPL1_NF_FRAC(arma::colvec x, int n, int p, double lambda_init, double t, arma::colvec weights, arma::colvec uinit, arma::colvec vinit, Eigen::SparseMatrix<double> premat, arma::umat IndMat, arma::umat EOneIndMat, arma::umat ETwoIndMat, double rho, int max_iter, int burn_in, bool verbose, int keep);
RcppExport SEXP _clustRviz_CARPL1_NF_FRAC(SEXP xSEXP, SEXP nSEXP, SEXP pSEXP, SEXP lambda_initSEXP, SEXP tSEXP, SEXP weightsSEXP, SEXP uinitSEXP, SEXP vinitSEXP, SEXP prematSEXP, SEXP IndMatSEXP, SEXP EOneIndMatSEXP, SEXP ETwoIndMatSEXP, SEXP rhoSEXP, SEXP max_iterSEXP, SEXP burn_inSEXP, SEXP verboseSEXP, SEXP keepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_init(lambda_initSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type uinit(uinitSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type vinit(vinitSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type premat(prematSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type IndMat(IndMatSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type EOneIndMat(EOneIndMatSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ETwoIndMat(ETwoIndMatSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type keep(keepSEXP);
    rcpp_result_gen = Rcpp::wrap(CARPL1_NF_FRAC(x, n, p, lambda_init, t, weights, uinit, vinit, premat, IndMat, EOneIndMat, ETwoIndMat, rho, max_iter, burn_in, verbose, keep));
    return rcpp_result_gen;
END_RCPP
}
// CARPL1_VIS_FRAC
Rcpp::List CARPL1_VIS_FRAC(arma::colvec x, int n, int p, double lambda_init, arma::colvec weights, arma::colvec uinit, arma::colvec vinit, Eigen::SparseMatrix<double> premat, arma::umat IndMat, arma::umat EOneIndMat, arma::umat ETwoIndMat, double rho, int max_iter, int burn_in, bool verbose, double back, double try_tol, int ti, double t_switch, int keep);
RcppExport SEXP _clustRviz_CARPL1_VIS_FRAC(SEXP xSEXP, SEXP nSEXP, SEXP pSEXP, SEXP lambda_initSEXP, SEXP weightsSEXP, SEXP uinitSEXP, SEXP vinitSEXP, SEXP prematSEXP, SEXP IndMatSEXP, SEXP EOneIndMatSEXP, SEXP ETwoIndMatSEXP, SEXP rhoSEXP, SEXP max_iterSEXP, SEXP burn_inSEXP, SEXP verboseSEXP, SEXP backSEXP, SEXP try_tolSEXP, SEXP tiSEXP, SEXP t_switchSEXP, SEXP keepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_init(lambda_initSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type uinit(uinitSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type vinit(vinitSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type premat(prematSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type IndMat(IndMatSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type EOneIndMat(EOneIndMatSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ETwoIndMat(ETwoIndMatSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type back(backSEXP);
    Rcpp::traits::input_parameter< double >::type try_tol(try_tolSEXP);
    Rcpp::traits::input_parameter< int >::type ti(tiSEXP);
    Rcpp::traits::input_parameter< double >::type t_switch(t_switchSEXP);
    Rcpp::traits::input_parameter< int >::type keep(keepSEXP);
    rcpp_result_gen = Rcpp::wrap(CARPL1_VIS_FRAC(x, n, p, lambda_init, weights, uinit, vinit, premat, IndMat, EOneIndMat, ETwoIndMat, rho, max_iter, burn_in, verbose, back, try_tol, ti, t_switch, keep));
    return rcpp_result_gen;
END_RCPP
}
// BICARPL2_VIS
Rcpp::List BICARPL2_VIS(arma::colvec x, int n, int p, double lambda_init, arma::colvec weights_col, arma::colvec weights_row, arma::colvec uinit_row, arma::colvec uinit_col, arma::colvec vinit_row, arma::colvec vinit_col, Eigen::SparseMatrix<double> premat_row, Eigen::SparseMatrix<double> premat_col, arma::umat IndMat_row, arma::umat IndMat_col, arma::umat EOneIndMat_row, arma::umat EOneIndMat_col, arma::umat ETwoIndMat_row, arma::umat ETwoIndMat_col, double rho, int max_iter, int burn_in, bool verbose, bool verbose_inner, double try_tol, int ti, double t_switch);
RcppExport SEXP _clustRviz_BICARPL2_VIS(SEXP xSEXP, SEXP nSEXP, SEXP pSEXP, SEXP lambda_initSEXP, SEXP weights_colSEXP, SEXP weights_rowSEXP, SEXP uinit_rowSEXP, SEXP uinit_colSEXP, SEXP vinit_rowSEXP, SEXP vinit_colSEXP, SEXP premat_rowSEXP, SEXP premat_colSEXP, SEXP IndMat_rowSEXP, SEXP IndMat_colSEXP, SEXP EOneIndMat_rowSEXP, SEXP EOneIndMat_colSEXP, SEXP ETwoIndMat_rowSEXP, SEXP ETwoIndMat_colSEXP, SEXP rhoSEXP, SEXP max_iterSEXP, SEXP burn_inSEXP, SEXP verboseSEXP, SEXP verbose_innerSEXP, SEXP try_tolSEXP, SEXP tiSEXP, SEXP t_switchSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_init(lambda_initSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights_col(weights_colSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights_row(weights_rowSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type uinit_row(uinit_rowSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type uinit_col(uinit_colSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type vinit_row(vinit_rowSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type vinit_col(vinit_colSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type premat_row(premat_rowSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type premat_col(premat_colSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type IndMat_row(IndMat_rowSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type IndMat_col(IndMat_colSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type EOneIndMat_row(EOneIndMat_rowSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type EOneIndMat_col(EOneIndMat_colSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ETwoIndMat_row(ETwoIndMat_rowSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ETwoIndMat_col(ETwoIndMat_colSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose_inner(verbose_innerSEXP);
    Rcpp::traits::input_parameter< double >::type try_tol(try_tolSEXP);
    Rcpp::traits::input_parameter< int >::type ti(tiSEXP);
    Rcpp::traits::input_parameter< double >::type t_switch(t_switchSEXP);
    rcpp_result_gen = Rcpp::wrap(BICARPL2_VIS(x, n, p, lambda_init, weights_col, weights_row, uinit_row, uinit_col, vinit_row, vinit_col, premat_row, premat_col, IndMat_row, IndMat_col, EOneIndMat_row, EOneIndMat_col, ETwoIndMat_row, ETwoIndMat_col, rho, max_iter, burn_in, verbose, verbose_inner, try_tol, ti, t_switch));
    return rcpp_result_gen;
END_RCPP
}
// BICARPL1_VIS
Rcpp::List BICARPL1_VIS(arma::colvec x, int n, int p, double lambda_init, arma::colvec weights_col, arma::colvec weights_row, arma::colvec uinit_row, arma::colvec uinit_col, arma::colvec vinit_row, arma::colvec vinit_col, Eigen::SparseMatrix<double> premat_row, Eigen::SparseMatrix<double> premat_col, arma::umat IndMat_row, arma::umat IndMat_col, arma::umat EOneIndMat_row, arma::umat EOneIndMat_col, arma::umat ETwoIndMat_row, arma::umat ETwoIndMat_col, double rho, int max_iter, int burn_in, bool verbose, bool verbose_inner, double try_tol, int ti, double t_switch);
RcppExport SEXP _clustRviz_BICARPL1_VIS(SEXP xSEXP, SEXP nSEXP, SEXP pSEXP, SEXP lambda_initSEXP, SEXP weights_colSEXP, SEXP weights_rowSEXP, SEXP uinit_rowSEXP, SEXP uinit_colSEXP, SEXP vinit_rowSEXP, SEXP vinit_colSEXP, SEXP premat_rowSEXP, SEXP premat_colSEXP, SEXP IndMat_rowSEXP, SEXP IndMat_colSEXP, SEXP EOneIndMat_rowSEXP, SEXP EOneIndMat_colSEXP, SEXP ETwoIndMat_rowSEXP, SEXP ETwoIndMat_colSEXP, SEXP rhoSEXP, SEXP max_iterSEXP, SEXP burn_inSEXP, SEXP verboseSEXP, SEXP verbose_innerSEXP, SEXP try_tolSEXP, SEXP tiSEXP, SEXP t_switchSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_init(lambda_initSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights_col(weights_colSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights_row(weights_rowSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type uinit_row(uinit_rowSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type uinit_col(uinit_colSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type vinit_row(vinit_rowSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type vinit_col(vinit_colSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type premat_row(premat_rowSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type premat_col(premat_colSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type IndMat_row(IndMat_rowSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type IndMat_col(IndMat_colSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type EOneIndMat_row(EOneIndMat_rowSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type EOneIndMat_col(EOneIndMat_colSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ETwoIndMat_row(ETwoIndMat_rowSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ETwoIndMat_col(ETwoIndMat_colSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose_inner(verbose_innerSEXP);
    Rcpp::traits::input_parameter< double >::type try_tol(try_tolSEXP);
    Rcpp::traits::input_parameter< int >::type ti(tiSEXP);
    Rcpp::traits::input_parameter< double >::type t_switch(t_switchSEXP);
    rcpp_result_gen = Rcpp::wrap(BICARPL1_VIS(x, n, p, lambda_init, weights_col, weights_row, uinit_row, uinit_col, vinit_row, vinit_col, premat_row, premat_col, IndMat_row, IndMat_col, EOneIndMat_row, EOneIndMat_col, ETwoIndMat_row, ETwoIndMat_col, rho, max_iter, burn_in, verbose, verbose_inner, try_tol, ti, t_switch));
    return rcpp_result_gen;
END_RCPP
}
// BICARPL2_NF_FRAC
Rcpp::List BICARPL2_NF_FRAC(arma::colvec x, int n, int p, double lambda_init, double t, arma::colvec weights_row, arma::colvec weights_col, arma::colvec uinit_row, arma::colvec uinit_col, arma::colvec vinit_row, arma::colvec vinit_col, Eigen::SparseMatrix<double> premat_row, Eigen::SparseMatrix<double> premat_col, arma::umat IndMat_row, arma::umat IndMat_col, arma::umat EOneIndMat_row, arma::umat EOneIndMat_col, arma::umat ETwoIndMat_row, arma::umat ETwoIndMat_col, double rho, int max_iter, int burn_in, bool verbose, int keep);
RcppExport SEXP _clustRviz_BICARPL2_NF_FRAC(SEXP xSEXP, SEXP nSEXP, SEXP pSEXP, SEXP lambda_initSEXP, SEXP tSEXP, SEXP weights_rowSEXP, SEXP weights_colSEXP, SEXP uinit_rowSEXP, SEXP uinit_colSEXP, SEXP vinit_rowSEXP, SEXP vinit_colSEXP, SEXP premat_rowSEXP, SEXP premat_colSEXP, SEXP IndMat_rowSEXP, SEXP IndMat_colSEXP, SEXP EOneIndMat_rowSEXP, SEXP EOneIndMat_colSEXP, SEXP ETwoIndMat_rowSEXP, SEXP ETwoIndMat_colSEXP, SEXP rhoSEXP, SEXP max_iterSEXP, SEXP burn_inSEXP, SEXP verboseSEXP, SEXP keepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_init(lambda_initSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights_row(weights_rowSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights_col(weights_colSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type uinit_row(uinit_rowSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type uinit_col(uinit_colSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type vinit_row(vinit_rowSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type vinit_col(vinit_colSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type premat_row(premat_rowSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type premat_col(premat_colSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type IndMat_row(IndMat_rowSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type IndMat_col(IndMat_colSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type EOneIndMat_row(EOneIndMat_rowSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type EOneIndMat_col(EOneIndMat_colSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ETwoIndMat_row(ETwoIndMat_rowSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ETwoIndMat_col(ETwoIndMat_colSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type keep(keepSEXP);
    rcpp_result_gen = Rcpp::wrap(BICARPL2_NF_FRAC(x, n, p, lambda_init, t, weights_row, weights_col, uinit_row, uinit_col, vinit_row, vinit_col, premat_row, premat_col, IndMat_row, IndMat_col, EOneIndMat_row, EOneIndMat_col, ETwoIndMat_row, ETwoIndMat_col, rho, max_iter, burn_in, verbose, keep));
    return rcpp_result_gen;
END_RCPP
}
// BICARPL1_NF_FRAC
Rcpp::List BICARPL1_NF_FRAC(arma::colvec x, int n, int p, double lambda_init, double t, arma::colvec weights_row, arma::colvec weights_col, arma::colvec uinit_row, arma::colvec uinit_col, arma::colvec vinit_row, arma::colvec vinit_col, Eigen::SparseMatrix<double> premat_row, Eigen::SparseMatrix<double> premat_col, arma::umat IndMat_row, arma::umat IndMat_col, arma::umat EOneIndMat_row, arma::umat EOneIndMat_col, arma::umat ETwoIndMat_row, arma::umat ETwoIndMat_col, double rho, int max_iter, int burn_in, bool verbose, int keep);
RcppExport SEXP _clustRviz_BICARPL1_NF_FRAC(SEXP xSEXP, SEXP nSEXP, SEXP pSEXP, SEXP lambda_initSEXP, SEXP tSEXP, SEXP weights_rowSEXP, SEXP weights_colSEXP, SEXP uinit_rowSEXP, SEXP uinit_colSEXP, SEXP vinit_rowSEXP, SEXP vinit_colSEXP, SEXP premat_rowSEXP, SEXP premat_colSEXP, SEXP IndMat_rowSEXP, SEXP IndMat_colSEXP, SEXP EOneIndMat_rowSEXP, SEXP EOneIndMat_colSEXP, SEXP ETwoIndMat_rowSEXP, SEXP ETwoIndMat_colSEXP, SEXP rhoSEXP, SEXP max_iterSEXP, SEXP burn_inSEXP, SEXP verboseSEXP, SEXP keepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_init(lambda_initSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights_row(weights_rowSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weights_col(weights_colSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type uinit_row(uinit_rowSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type uinit_col(uinit_colSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type vinit_row(vinit_rowSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type vinit_col(vinit_colSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type premat_row(premat_rowSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type premat_col(premat_colSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type IndMat_row(IndMat_rowSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type IndMat_col(IndMat_colSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type EOneIndMat_row(EOneIndMat_rowSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type EOneIndMat_col(EOneIndMat_colSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ETwoIndMat_row(ETwoIndMat_rowSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ETwoIndMat_col(ETwoIndMat_colSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type keep(keepSEXP);
    rcpp_result_gen = Rcpp::wrap(BICARPL1_NF_FRAC(x, n, p, lambda_init, t, weights_row, weights_col, uinit_row, uinit_col, vinit_row, vinit_col, premat_row, premat_col, IndMat_row, IndMat_col, EOneIndMat_row, EOneIndMat_col, ETwoIndMat_row, ETwoIndMat_col, rho, max_iter, burn_in, verbose, keep));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_clustRviz_ProxL1", (DL_FUNC) &_clustRviz_ProxL1, 4},
    {"_clustRviz_CARPL2_VIS_FRAC", (DL_FUNC) &_clustRviz_CARPL2_VIS_FRAC, 20},
    {"_clustRviz_CARPL2_NF_FRAC", (DL_FUNC) &_clustRviz_CARPL2_NF_FRAC, 17},
    {"_clustRviz_CARPL1_NF_FRAC", (DL_FUNC) &_clustRviz_CARPL1_NF_FRAC, 17},
    {"_clustRviz_CARPL1_VIS_FRAC", (DL_FUNC) &_clustRviz_CARPL1_VIS_FRAC, 20},
    {"_clustRviz_BICARPL2_VIS", (DL_FUNC) &_clustRviz_BICARPL2_VIS, 26},
    {"_clustRviz_BICARPL1_VIS", (DL_FUNC) &_clustRviz_BICARPL1_VIS, 26},
    {"_clustRviz_BICARPL2_NF_FRAC", (DL_FUNC) &_clustRviz_BICARPL2_NF_FRAC, 24},
    {"_clustRviz_BICARPL1_NF_FRAC", (DL_FUNC) &_clustRviz_BICARPL1_NF_FRAC, 24},
    {NULL, NULL, 0}
};

RcppExport void R_init_clustRviz(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
