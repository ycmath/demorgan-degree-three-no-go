// Lean compiler output
// Module: Demorgan3.Collapse
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
lean_object* lean_nat_to_int(lean_object*);
uint8_t lp_Demorgan3_Demorgan3_rho(lean_object*);
lean_object* lp_Demorgan3_Demorgan3_meet(lean_object*, lean_object*);
lean_object* lp_Demorgan3_Demorgan3_join(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_Wbar(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_Wbar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_cWbar(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_cWbar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_Demorgan3_Demorgan3_rhoInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Demorgan3_Demorgan3_rhoInt___closed__0;
static lean_once_cell_t lp_Demorgan3_Demorgan3_rhoInt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Demorgan3_Demorgan3_rhoInt___closed__1;
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_rhoInt(lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_rhoInt___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_Wbar(uint8_t v_r_1_, uint8_t v_s_2_, lean_object* v_u_3_){
_start:
{
uint8_t v___y_5_; uint8_t v___y_6_; uint8_t v___y_9_; 
if (v_r_1_ == 0)
{
v___y_9_ = v_r_1_;
goto v___jp_8_;
}
else
{
uint8_t v___x_11_; 
v___x_11_ = lp_Demorgan3_Demorgan3_rho(v_u_3_);
if (v___x_11_ == 0)
{
v___y_9_ = v_r_1_;
goto v___jp_8_;
}
else
{
uint8_t v___x_12_; 
v___x_12_ = 0;
v___y_9_ = v___x_12_;
goto v___jp_8_;
}
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
if (v_s_2_ == 0)
{
v___y_5_ = v___y_9_;
v___y_6_ = v_s_2_;
goto v___jp_4_;
}
else
{
uint8_t v___x_10_; 
v___x_10_ = lp_Demorgan3_Demorgan3_rho(v_u_3_);
v___y_5_ = v___y_9_;
v___y_6_ = v___x_10_;
goto v___jp_4_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_Wbar___boxed(lean_object* v_r_13_, lean_object* v_s_14_, lean_object* v_u_15_){
_start:
{
uint8_t v_r_boxed_16_; uint8_t v_s_boxed_17_; uint8_t v_res_18_; lean_object* v_r_19_; 
v_r_boxed_16_ = lean_unbox(v_r_13_);
v_s_boxed_17_ = lean_unbox(v_s_14_);
v_res_18_ = lp_Demorgan3_Demorgan3_Wbar(v_r_boxed_16_, v_s_boxed_17_, v_u_15_);
lean_dec_ref(v_u_15_);
v_r_19_ = lean_box(v_res_18_);
return v_r_19_;
}
}
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_cWbar(uint8_t v_r_20_, uint8_t v_s_21_, lean_object* v_x_22_, lean_object* v_y_23_, lean_object* v_z_24_){
_start:
{
uint8_t v___y_26_; uint8_t v___y_27_; uint8_t v___y_30_; uint8_t v___y_33_; uint8_t v___y_34_; uint8_t v___y_37_; uint8_t v___y_46_; lean_object* v___x_48_; lean_object* v___x_49_; uint8_t v___x_50_; lean_object* v___x_51_; uint8_t v___x_52_; 
lean_inc_ref(v_y_23_);
lean_inc_ref(v_x_22_);
v___x_48_ = lp_Demorgan3_Demorgan3_join(v_x_22_, v_y_23_);
lean_inc_ref_n(v_z_24_, 2);
lean_inc_ref(v___x_48_);
v___x_49_ = lp_Demorgan3_Demorgan3_join(v___x_48_, v_z_24_);
v___x_50_ = lp_Demorgan3_Demorgan3_Wbar(v_r_20_, v_s_21_, v___x_49_);
lean_dec_ref(v___x_49_);
v___x_51_ = lp_Demorgan3_Demorgan3_meet(v___x_48_, v_z_24_);
v___x_52_ = lp_Demorgan3_Demorgan3_Wbar(v_r_20_, v_s_21_, v___x_51_);
lean_dec_ref(v___x_51_);
if (v___x_50_ == 0)
{
if (v___x_52_ == 0)
{
goto v___jp_43_;
}
else
{
v___y_46_ = v___x_50_;
goto v___jp_45_;
}
}
else
{
v___y_46_ = v___x_52_;
goto v___jp_45_;
}
v___jp_25_:
{
if (v___y_26_ == 0)
{
return v___y_27_;
}
else
{
if (v___y_27_ == 0)
{
return v___y_26_;
}
else
{
uint8_t v___x_28_; 
v___x_28_ = 0;
return v___x_28_;
}
}
}
v___jp_29_:
{
uint8_t v___x_31_; 
v___x_31_ = 0;
v___y_26_ = v___y_30_;
v___y_27_ = v___x_31_;
goto v___jp_25_;
}
v___jp_32_:
{
if (v___y_34_ == 0)
{
uint8_t v___x_35_; 
v___x_35_ = 1;
v___y_26_ = v___y_33_;
v___y_27_ = v___x_35_;
goto v___jp_25_;
}
else
{
v___y_30_ = v___y_33_;
goto v___jp_29_;
}
}
v___jp_36_:
{
lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; lean_object* v___x_41_; uint8_t v___x_42_; 
v___x_38_ = lp_Demorgan3_Demorgan3_meet(v_x_22_, v_y_23_);
lean_inc_ref(v_z_24_);
lean_inc_ref(v___x_38_);
v___x_39_ = lp_Demorgan3_Demorgan3_join(v___x_38_, v_z_24_);
v___x_40_ = lp_Demorgan3_Demorgan3_Wbar(v_r_20_, v_s_21_, v___x_39_);
lean_dec_ref(v___x_39_);
v___x_41_ = lp_Demorgan3_Demorgan3_meet(v___x_38_, v_z_24_);
v___x_42_ = lp_Demorgan3_Demorgan3_Wbar(v_r_20_, v_s_21_, v___x_41_);
lean_dec_ref(v___x_41_);
if (v___x_40_ == 0)
{
if (v___x_42_ == 0)
{
v___y_30_ = v___y_37_;
goto v___jp_29_;
}
else
{
v___y_33_ = v___y_37_;
v___y_34_ = v___x_40_;
goto v___jp_32_;
}
}
else
{
v___y_33_ = v___y_37_;
v___y_34_ = v___x_42_;
goto v___jp_32_;
}
}
v___jp_43_:
{
uint8_t v___x_44_; 
v___x_44_ = 0;
v___y_37_ = v___x_44_;
goto v___jp_36_;
}
v___jp_45_:
{
if (v___y_46_ == 0)
{
uint8_t v___x_47_; 
v___x_47_ = 1;
v___y_37_ = v___x_47_;
goto v___jp_36_;
}
else
{
goto v___jp_43_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_cWbar___boxed(lean_object* v_r_53_, lean_object* v_s_54_, lean_object* v_x_55_, lean_object* v_y_56_, lean_object* v_z_57_){
_start:
{
uint8_t v_r_boxed_58_; uint8_t v_s_boxed_59_; uint8_t v_res_60_; lean_object* v_r_61_; 
v_r_boxed_58_ = lean_unbox(v_r_53_);
v_s_boxed_59_ = lean_unbox(v_s_54_);
v_res_60_ = lp_Demorgan3_Demorgan3_cWbar(v_r_boxed_58_, v_s_boxed_59_, v_x_55_, v_y_56_, v_z_57_);
v_r_61_ = lean_box(v_res_60_);
return v_r_61_;
}
}
static lean_object* _init_lp_Demorgan3_Demorgan3_rhoInt___closed__0(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_unsigned_to_nat(0u);
v___x_63_ = lean_nat_to_int(v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_lp_Demorgan3_Demorgan3_rhoInt___closed__1(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_unsigned_to_nat(1u);
v___x_65_ = lean_nat_to_int(v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_rhoInt(lean_object* v_u_66_){
_start:
{
uint8_t v___x_67_; 
v___x_67_ = lp_Demorgan3_Demorgan3_rho(v_u_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; 
v___x_68_ = lean_obj_once(&lp_Demorgan3_Demorgan3_rhoInt___closed__0, &lp_Demorgan3_Demorgan3_rhoInt___closed__0_once, _init_lp_Demorgan3_Demorgan3_rhoInt___closed__0);
return v___x_68_;
}
else
{
lean_object* v___x_69_; 
v___x_69_ = lean_obj_once(&lp_Demorgan3_Demorgan3_rhoInt___closed__1, &lp_Demorgan3_Demorgan3_rhoInt___closed__1_once, _init_lp_Demorgan3_Demorgan3_rhoInt___closed__1);
return v___x_69_;
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_rhoInt___boxed(lean_object* v_u_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = lp_Demorgan3_Demorgan3_rhoInt(v_u_70_);
lean_dec_ref(v_u_70_);
return v_res_71_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Demorgan3_Demorgan3_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Demorgan3_Demorgan3_Collapse(uint8_t builtin) {
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
