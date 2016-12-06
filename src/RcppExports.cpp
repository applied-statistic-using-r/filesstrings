// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// PasteCollapse
String PasteCollapse(CharacterVector strings, std::string collapse);
RcppExport SEXP filesstrings_PasteCollapse(SEXP stringsSEXP, SEXP collapseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type strings(stringsSEXP);
    Rcpp::traits::input_parameter< std::string >::type collapse(collapseSEXP);
    rcpp_result_gen = Rcpp::wrap(PasteCollapse(strings, collapse));
    return rcpp_result_gen;
END_RCPP
}
// PasteListElems
CharacterVector PasteListElems(List string_list, std::string collapse);
RcppExport SEXP filesstrings_PasteListElems(SEXP string_listSEXP, SEXP collapseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type string_list(string_listSEXP);
    Rcpp::traits::input_parameter< std::string >::type collapse(collapseSEXP);
    rcpp_result_gen = Rcpp::wrap(PasteListElems(string_list, collapse));
    return rcpp_result_gen;
END_RCPP
}
// StrListRemoveEmpties
List StrListRemoveEmpties(List string_list);
RcppExport SEXP filesstrings_StrListRemoveEmpties(SEXP string_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type string_list(string_listSEXP);
    rcpp_result_gen = Rcpp::wrap(StrListRemoveEmpties(string_list));
    return rcpp_result_gen;
END_RCPP
}
// CharListElemsNthElem
CharacterVector CharListElemsNthElem(List string_list, int n);
RcppExport SEXP filesstrings_CharListElemsNthElem(SEXP string_listSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type string_list(string_listSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(CharListElemsNthElem(string_list, n));
    return rcpp_result_gen;
END_RCPP
}
// NumListElemsNthElem
NumericVector NumListElemsNthElem(List num_list, int n);
RcppExport SEXP filesstrings_NumListElemsNthElem(SEXP num_listSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type num_list(num_listSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(NumListElemsNthElem(num_list, n));
    return rcpp_result_gen;
END_RCPP
}
// IsPrefix
bool IsPrefix(std::string pre, std::string whole);
RcppExport SEXP filesstrings_IsPrefix(SEXP preSEXP, SEXP wholeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type pre(preSEXP);
    Rcpp::traits::input_parameter< std::string >::type whole(wholeSEXP);
    rcpp_result_gen = Rcpp::wrap(IsPrefix(pre, whole));
    return rcpp_result_gen;
END_RCPP
}
// InterleaveStrings
CharacterVector InterleaveStrings(CharacterVector strings1, CharacterVector strings2);
RcppExport SEXP filesstrings_InterleaveStrings(SEXP strings1SEXP, SEXP strings2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type strings1(strings1SEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type strings2(strings2SEXP);
    rcpp_result_gen = Rcpp::wrap(InterleaveStrings(strings1, strings2));
    return rcpp_result_gen;
END_RCPP
}
// CorrectInterleave0
CharacterVector CorrectInterleave0(std::string orig, CharacterVector strings1, CharacterVector strings2);
RcppExport SEXP filesstrings_CorrectInterleave0(SEXP origSEXP, SEXP strings1SEXP, SEXP strings2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type orig(origSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type strings1(strings1SEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type strings2(strings2SEXP);
    rcpp_result_gen = Rcpp::wrap(CorrectInterleave0(orig, strings1, strings2));
    return rcpp_result_gen;
END_RCPP
}
// CorrectInterleave
List CorrectInterleave(CharacterVector orig, List strings1, List strings2);
RcppExport SEXP filesstrings_CorrectInterleave(SEXP origSEXP, SEXP strings1SEXP, SEXP strings2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type orig(origSEXP);
    Rcpp::traits::input_parameter< List >::type strings1(strings1SEXP);
    Rcpp::traits::input_parameter< List >::type strings2(strings2SEXP);
    rcpp_result_gen = Rcpp::wrap(CorrectInterleave(orig, strings1, strings2));
    return rcpp_result_gen;
END_RCPP
}
// InterleaveStringList
List InterleaveStringList(List strings1, List strings2);
RcppExport SEXP filesstrings_InterleaveStringList(SEXP strings1SEXP, SEXP strings2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type strings1(strings1SEXP);
    Rcpp::traits::input_parameter< List >::type strings2(strings2SEXP);
    rcpp_result_gen = Rcpp::wrap(InterleaveStringList(strings1, strings2));
    return rcpp_result_gen;
END_RCPP
}
