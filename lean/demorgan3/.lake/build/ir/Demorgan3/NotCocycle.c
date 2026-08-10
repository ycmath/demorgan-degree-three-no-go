// Lean compiler output
// Module: Demorgan3.NotCocycle
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
lean_object* lp_Demorgan3_Demorgan3_add(lean_object*, lean_object*);
uint8_t lp_Demorgan3_Demorgan3_rho(lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_eta___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_eta___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_eta(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_eta___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_deltaBar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_deltaBar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_eta___redArg(lean_object* v_x_1_, lean_object* v_y_2_){
_start:
{
uint8_t v___y_4_; uint8_t v___x_7_; uint8_t v___x_8_; 
v___x_7_ = lp_Demorgan3_Demorgan3_rho(v_x_1_);
v___x_8_ = lp_Demorgan3_Demorgan3_rho(v_y_2_);
if (v___x_7_ == 0)
{
if (v___x_8_ == 0)
{
return v___x_8_;
}
else
{
v___y_4_ = v___x_7_;
goto v___jp_3_;
}
}
else
{
v___y_4_ = v___x_8_;
goto v___jp_3_;
}
v___jp_3_:
{
if (v___y_4_ == 0)
{
uint8_t v___x_5_; 
v___x_5_ = 1;
return v___x_5_;
}
else
{
uint8_t v___x_6_; 
v___x_6_ = 0;
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_eta___redArg___boxed(lean_object* v_x_9_, lean_object* v_y_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = lp_Demorgan3_Demorgan3_eta___redArg(v_x_9_, v_y_10_);
lean_dec_ref(v_y_10_);
lean_dec_ref(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_eta(lean_object* v_x_13_, lean_object* v_y_14_, lean_object* v___z_15_){
_start:
{
uint8_t v___x_16_; 
v___x_16_ = lp_Demorgan3_Demorgan3_eta___redArg(v_x_13_, v_y_14_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_eta___boxed(lean_object* v_x_17_, lean_object* v_y_18_, lean_object* v___z_19_){
_start:
{
uint8_t v_res_20_; lean_object* v_r_21_; 
v_res_20_ = lp_Demorgan3_Demorgan3_eta(v_x_17_, v_y_18_, v___z_19_);
lean_dec_ref(v___z_19_);
lean_dec_ref(v_y_18_);
lean_dec_ref(v_x_17_);
v_r_21_ = lean_box(v_res_20_);
return v_r_21_;
}
}
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_deltaBar(lean_object* v_f_22_, lean_object* v_g1_23_, lean_object* v_g2_24_, lean_object* v_g3_25_, lean_object* v_g4_26_){
_start:
{
lean_object* v___x_27_; uint8_t v___y_29_; lean_object* v___x_37_; lean_object* v___x_38_; uint8_t v___y_40_; lean_object* v___x_46_; lean_object* v___x_47_; uint8_t v___y_49_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; uint8_t v___x_58_; 
lean_inc_ref_n(v_f_22_, 4);
lean_inc_ref_n(v_g4_26_, 3);
lean_inc_ref_n(v_g3_25_, 2);
lean_inc_ref_n(v_g2_24_, 2);
v___x_27_ = lean_apply_3(v_f_22_, v_g2_24_, v_g3_25_, v_g4_26_);
v___x_37_ = lp_Demorgan3_Demorgan3_add(v_g1_23_, v_g2_24_);
v___x_38_ = lean_apply_3(v_f_22_, v___x_37_, v_g3_25_, v_g4_26_);
v___x_46_ = lp_Demorgan3_Demorgan3_add(v_g2_24_, v_g3_25_);
lean_inc_ref_n(v_g1_23_, 2);
v___x_47_ = lean_apply_3(v_f_22_, v_g1_23_, v___x_46_, v_g4_26_);
v___x_55_ = lp_Demorgan3_Demorgan3_add(v_g3_25_, v_g4_26_);
lean_dec_ref(v_g4_26_);
v___x_56_ = lean_apply_3(v_f_22_, v_g1_23_, v_g2_24_, v___x_55_);
v___x_57_ = lean_apply_3(v_f_22_, v_g1_23_, v_g2_24_, v_g3_25_);
v___x_58_ = lean_unbox(v___x_56_);
if (v___x_58_ == 0)
{
uint8_t v___x_59_; 
v___x_59_ = lean_unbox(v___x_57_);
if (v___x_59_ == 0)
{
goto v___jp_53_;
}
else
{
goto v___jp_51_;
}
}
else
{
uint8_t v___x_60_; 
v___x_60_ = lean_unbox(v___x_57_);
if (v___x_60_ == 0)
{
goto v___jp_51_;
}
else
{
goto v___jp_53_;
}
}
v___jp_28_:
{
uint8_t v___x_30_; 
v___x_30_ = lean_unbox(v___x_27_);
if (v___x_30_ == 0)
{
return v___y_29_;
}
else
{
if (v___y_29_ == 0)
{
uint8_t v___x_31_; 
v___x_31_ = lean_unbox(v___x_27_);
return v___x_31_;
}
else
{
uint8_t v___x_32_; 
v___x_32_ = 0;
return v___x_32_;
}
}
}
v___jp_33_:
{
uint8_t v___x_34_; 
v___x_34_ = 1;
v___y_29_ = v___x_34_;
goto v___jp_28_;
}
v___jp_35_:
{
uint8_t v___x_36_; 
v___x_36_ = 0;
v___y_29_ = v___x_36_;
goto v___jp_28_;
}
v___jp_39_:
{
uint8_t v___x_41_; 
v___x_41_ = lean_unbox(v___x_38_);
if (v___x_41_ == 0)
{
if (v___y_40_ == 0)
{
goto v___jp_35_;
}
else
{
goto v___jp_33_;
}
}
else
{
if (v___y_40_ == 0)
{
goto v___jp_33_;
}
else
{
goto v___jp_35_;
}
}
}
v___jp_42_:
{
uint8_t v___x_43_; 
v___x_43_ = 1;
v___y_40_ = v___x_43_;
goto v___jp_39_;
}
v___jp_44_:
{
uint8_t v___x_45_; 
v___x_45_ = 0;
v___y_40_ = v___x_45_;
goto v___jp_39_;
}
v___jp_48_:
{
uint8_t v___x_50_; 
v___x_50_ = lean_unbox(v___x_47_);
if (v___x_50_ == 0)
{
if (v___y_49_ == 0)
{
goto v___jp_44_;
}
else
{
goto v___jp_42_;
}
}
else
{
if (v___y_49_ == 0)
{
goto v___jp_42_;
}
else
{
goto v___jp_44_;
}
}
}
v___jp_51_:
{
uint8_t v___x_52_; 
v___x_52_ = 1;
v___y_49_ = v___x_52_;
goto v___jp_48_;
}
v___jp_53_:
{
uint8_t v___x_54_; 
v___x_54_ = 0;
v___y_49_ = v___x_54_;
goto v___jp_48_;
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_deltaBar___boxed(lean_object* v_f_61_, lean_object* v_g1_62_, lean_object* v_g2_63_, lean_object* v_g3_64_, lean_object* v_g4_65_){
_start:
{
uint8_t v_res_66_; lean_object* v_r_67_; 
v_res_66_ = lp_Demorgan3_Demorgan3_deltaBar(v_f_61_, v_g1_62_, v_g2_63_, v_g3_64_, v_g4_65_);
v_r_67_ = lean_box(v_res_66_);
return v_r_67_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Demorgan3_Demorgan3_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Demorgan3_Demorgan3_NotCocycle(uint8_t builtin) {
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
