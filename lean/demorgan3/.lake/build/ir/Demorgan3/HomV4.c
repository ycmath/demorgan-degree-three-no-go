// Lean compiler output
// Module: Demorgan3.HomV4
// Imports: public import Init public meta import Init public import Demorgan3.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_linForm(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_linForm___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_linForm(uint8_t v_c1_1_, uint8_t v_c2_2_, lean_object* v_u_3_){
_start:
{
uint8_t v___y_5_; uint8_t v___y_6_; uint8_t v___y_9_; 
if (v_c1_1_ == 0)
{
v___y_9_ = v_c1_1_;
goto v___jp_8_;
}
else
{
lean_object* v_fst_12_; uint8_t v___x_13_; 
v_fst_12_ = lean_ctor_get(v_u_3_, 0);
v___x_13_ = lean_unbox(v_fst_12_);
v___y_9_ = v___x_13_;
goto v___jp_8_;
}
v___jp_4_:
{
if (v___y_5_ == 0)
{
return v___y_6_;
}
else
{
if (v___y_6_ == 0)
{
return v___y_5_;
}
else
{
uint8_t v___x_7_; 
v___x_7_ = 0;
return v___x_7_;
}
}
}
v___jp_8_:
{
if (v_c2_2_ == 0)
{
v___y_5_ = v___y_9_;
v___y_6_ = v_c2_2_;
goto v___jp_4_;
}
else
{
lean_object* v_snd_10_; uint8_t v___x_11_; 
v_snd_10_ = lean_ctor_get(v_u_3_, 1);
v___x_11_ = lean_unbox(v_snd_10_);
v___y_5_ = v___y_9_;
v___y_6_ = v___x_11_;
goto v___jp_4_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_linForm___boxed(lean_object* v_c1_14_, lean_object* v_c2_15_, lean_object* v_u_16_){
_start:
{
uint8_t v_c1_boxed_17_; uint8_t v_c2_boxed_18_; uint8_t v_res_19_; lean_object* v_r_20_; 
v_c1_boxed_17_ = lean_unbox(v_c1_14_);
v_c2_boxed_18_ = lean_unbox(v_c2_15_);
v_res_19_ = lp_Demorgan3_Demorgan3_linForm(v_c1_boxed_17_, v_c2_boxed_18_, v_u_16_);
lean_dec_ref(v_u_16_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Demorgan3_Demorgan3_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Demorgan3_Demorgan3_HomV4(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Demorgan3_Demorgan3_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
