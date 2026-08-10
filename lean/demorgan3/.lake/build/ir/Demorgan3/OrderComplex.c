// Lean compiler output
// Module: Demorgan3.OrderComplex
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
extern lean_object* lp_Demorgan3_Demorgan3_CON;
extern lean_object* lp_Demorgan3_Demorgan3_FAL;
extern lean_object* lp_Demorgan3_Demorgan3_TRU;
extern lean_object* lp_Demorgan3_Demorgan3_UNK;
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_le___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_lt___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_Demorgan3_Demorgan3_states___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Demorgan3_Demorgan3_states___closed__0;
static lean_once_cell_t lp_Demorgan3_Demorgan3_states___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Demorgan3_Demorgan3_states___closed__1;
static lean_once_cell_t lp_Demorgan3_Demorgan3_states___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Demorgan3_Demorgan3_states___closed__2;
static lean_once_cell_t lp_Demorgan3_Demorgan3_states___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Demorgan3_Demorgan3_states___closed__3;
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_states;
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_le(lean_object* v_x_1_, lean_object* v_y_2_){
_start:
{
lean_object* v_fst_3_; lean_object* v_snd_4_; uint8_t v___x_10_; 
v_fst_3_ = lean_ctor_get(v_x_1_, 0);
v_snd_4_ = lean_ctor_get(v_x_1_, 1);
v___x_10_ = lean_unbox(v_fst_3_);
if (v___x_10_ == 0)
{
goto v___jp_5_;
}
else
{
lean_object* v_fst_11_; uint8_t v___x_12_; 
v_fst_11_ = lean_ctor_get(v_y_2_, 0);
v___x_12_ = lean_unbox(v_fst_11_);
if (v___x_12_ == 0)
{
uint8_t v___x_13_; 
v___x_13_ = lean_unbox(v_fst_11_);
return v___x_13_;
}
else
{
goto v___jp_5_;
}
}
v___jp_5_:
{
uint8_t v___x_6_; 
v___x_6_ = lean_unbox(v_snd_4_);
if (v___x_6_ == 0)
{
uint8_t v___x_7_; 
v___x_7_ = 1;
return v___x_7_;
}
else
{
lean_object* v_snd_8_; uint8_t v___x_9_; 
v_snd_8_ = lean_ctor_get(v_y_2_, 1);
v___x_9_ = lean_unbox(v_snd_8_);
return v___x_9_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_le___boxed(lean_object* v_x_14_, lean_object* v_y_15_){
_start:
{
uint8_t v_res_16_; lean_object* v_r_17_; 
v_res_16_ = lp_Demorgan3_Demorgan3_le(v_x_14_, v_y_15_);
lean_dec_ref(v_y_15_);
lean_dec_ref(v_x_14_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_lt(lean_object* v_x_18_, lean_object* v_y_19_){
_start:
{
uint8_t v___x_20_; 
v___x_20_ = lp_Demorgan3_Demorgan3_le(v_x_18_, v_y_19_);
if (v___x_20_ == 0)
{
return v___x_20_;
}
else
{
uint8_t v___x_21_; 
v___x_21_ = lp_Demorgan3_Demorgan3_le(v_y_19_, v_x_18_);
if (v___x_21_ == 0)
{
return v___x_20_;
}
else
{
uint8_t v___x_22_; 
v___x_22_ = 0;
return v___x_22_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_lt___boxed(lean_object* v_x_23_, lean_object* v_y_24_){
_start:
{
uint8_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = lp_Demorgan3_Demorgan3_lt(v_x_23_, v_y_24_);
lean_dec_ref(v_y_24_);
lean_dec_ref(v_x_23_);
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
static lean_object* _init_lp_Demorgan3_Demorgan3_states___closed__0(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_box(0);
v___x_28_ = lp_Demorgan3_Demorgan3_CON;
v___x_29_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_lp_Demorgan3_Demorgan3_states___closed__1(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_obj_once(&lp_Demorgan3_Demorgan3_states___closed__0, &lp_Demorgan3_Demorgan3_states___closed__0_once, _init_lp_Demorgan3_Demorgan3_states___closed__0);
v___x_31_ = lp_Demorgan3_Demorgan3_FAL;
v___x_32_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_lp_Demorgan3_Demorgan3_states___closed__2(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = lean_obj_once(&lp_Demorgan3_Demorgan3_states___closed__1, &lp_Demorgan3_Demorgan3_states___closed__1_once, _init_lp_Demorgan3_Demorgan3_states___closed__1);
v___x_34_ = lp_Demorgan3_Demorgan3_TRU;
v___x_35_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
return v___x_35_;
}
}
static lean_object* _init_lp_Demorgan3_Demorgan3_states___closed__3(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = lean_obj_once(&lp_Demorgan3_Demorgan3_states___closed__2, &lp_Demorgan3_Demorgan3_states___closed__2_once, _init_lp_Demorgan3_Demorgan3_states___closed__2);
v___x_37_ = lp_Demorgan3_Demorgan3_UNK;
v___x_38_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_lp_Demorgan3_Demorgan3_states(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_obj_once(&lp_Demorgan3_Demorgan3_states___closed__3, &lp_Demorgan3_Demorgan3_states___closed__3_once, _init_lp_Demorgan3_Demorgan3_states___closed__3);
return v___x_39_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Demorgan3_Demorgan3_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Demorgan3_Demorgan3_OrderComplex(uint8_t builtin) {
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
lp_Demorgan3_Demorgan3_states = _init_lp_Demorgan3_Demorgan3_states();
lean_mark_persistent(lp_Demorgan3_Demorgan3_states);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
