// Lean compiler output
// Module: Demorgan3.Basic
// Imports: public import Init public meta import Init
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
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
static const lean_ctor_object lp_Demorgan3_Demorgan3_UNK___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Demorgan3_Demorgan3_UNK___closed__0 = (const lean_object*)&lp_Demorgan3_Demorgan3_UNK___closed__0_value;
LEAN_EXPORT const lean_object* lp_Demorgan3_Demorgan3_UNK = (const lean_object*)&lp_Demorgan3_Demorgan3_UNK___closed__0_value;
static const lean_ctor_object lp_Demorgan3_Demorgan3_TRU___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Demorgan3_Demorgan3_TRU___closed__0 = (const lean_object*)&lp_Demorgan3_Demorgan3_TRU___closed__0_value;
LEAN_EXPORT const lean_object* lp_Demorgan3_Demorgan3_TRU = (const lean_object*)&lp_Demorgan3_Demorgan3_TRU___closed__0_value;
static const lean_ctor_object lp_Demorgan3_Demorgan3_FAL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Demorgan3_Demorgan3_FAL___closed__0 = (const lean_object*)&lp_Demorgan3_Demorgan3_FAL___closed__0_value;
LEAN_EXPORT const lean_object* lp_Demorgan3_Demorgan3_FAL = (const lean_object*)&lp_Demorgan3_Demorgan3_FAL___closed__0_value;
static const lean_ctor_object lp_Demorgan3_Demorgan3_CON___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Demorgan3_Demorgan3_CON___closed__0 = (const lean_object*)&lp_Demorgan3_Demorgan3_CON___closed__0_value;
LEAN_EXPORT const lean_object* lp_Demorgan3_Demorgan3_CON = (const lean_object*)&lp_Demorgan3_Demorgan3_CON___closed__0_value;
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_meet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_join(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_tau(lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_rho(lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_rho___boxed(lean_object*);
static lean_once_cell_t lp_Demorgan3_Demorgan3_W__A___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Demorgan3_Demorgan3_W__A___closed__0;
static lean_once_cell_t lp_Demorgan3_Demorgan3_W__A___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Demorgan3_Demorgan3_W__A___closed__1;
static lean_once_cell_t lp_Demorgan3_Demorgan3_W__A___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Demorgan3_Demorgan3_W__A___closed__2;
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_W__A(lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_W__A___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_W__B(lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_W__B___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_cW(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_decForallBool___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_decForallBool___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_decForallBool(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_decForallBool___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_decForallL___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_decForallL___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_decForallL(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_decForallL___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__A_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__A_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__A_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__A_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__B_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__B_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__B_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__B_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_meet(lean_object* v_x_23_, lean_object* v_y_24_){
_start:
{
lean_object* v_fst_25_; lean_object* v_snd_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_51_; 
v_fst_25_ = lean_ctor_get(v_x_23_, 0);
v_snd_26_ = lean_ctor_get(v_x_23_, 1);
v_isSharedCheck_51_ = !lean_is_exclusive(v_x_23_);
if (v_isSharedCheck_51_ == 0)
{
v___x_28_ = v_x_23_;
v_isShared_29_ = v_isSharedCheck_51_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_snd_26_);
lean_inc(v_fst_25_);
lean_dec(v_x_23_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_51_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
uint8_t v___y_31_; uint8_t v___x_47_; 
v___x_47_ = lean_unbox(v_fst_25_);
if (v___x_47_ == 0)
{
uint8_t v___x_48_; 
v___x_48_ = lean_unbox(v_fst_25_);
lean_dec(v_fst_25_);
v___y_31_ = v___x_48_;
goto v___jp_30_;
}
else
{
lean_object* v_fst_49_; uint8_t v___x_50_; 
lean_dec(v_fst_25_);
v_fst_49_ = lean_ctor_get(v_y_24_, 0);
v___x_50_ = lean_unbox(v_fst_49_);
v___y_31_ = v___x_50_;
goto v___jp_30_;
}
v___jp_30_:
{
uint8_t v___x_32_; 
v___x_32_ = lean_unbox(v_snd_26_);
if (v___x_32_ == 0)
{
lean_object* v___x_33_; lean_object* v___x_35_; 
lean_dec_ref(v_y_24_);
v___x_33_ = lean_box(v___y_31_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 0, v___x_33_);
v___x_35_ = v___x_28_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_33_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v_snd_26_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
else
{
lean_object* v_snd_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_45_; 
lean_del_object(v___x_28_);
lean_dec(v_snd_26_);
v_snd_37_ = lean_ctor_get(v_y_24_, 1);
v_isSharedCheck_45_ = !lean_is_exclusive(v_y_24_);
if (v_isSharedCheck_45_ == 0)
{
lean_object* v_unused_46_; 
v_unused_46_ = lean_ctor_get(v_y_24_, 0);
lean_dec(v_unused_46_);
v___x_39_ = v_y_24_;
v_isShared_40_ = v_isSharedCheck_45_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_snd_37_);
lean_dec(v_y_24_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_45_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_41_; lean_object* v___x_43_; 
v___x_41_ = lean_box(v___y_31_);
if (v_isShared_40_ == 0)
{
lean_ctor_set(v___x_39_, 0, v___x_41_);
v___x_43_ = v___x_39_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_41_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_snd_37_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_join(lean_object* v_x_52_, lean_object* v_y_53_){
_start:
{
lean_object* v_fst_54_; lean_object* v_snd_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_80_; 
v_fst_54_ = lean_ctor_get(v_x_52_, 0);
v_snd_55_ = lean_ctor_get(v_x_52_, 1);
v_isSharedCheck_80_ = !lean_is_exclusive(v_x_52_);
if (v_isSharedCheck_80_ == 0)
{
v___x_57_ = v_x_52_;
v_isShared_58_ = v_isSharedCheck_80_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_snd_55_);
lean_inc(v_fst_54_);
lean_dec(v_x_52_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_80_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
uint8_t v___y_60_; uint8_t v___x_76_; 
v___x_76_ = lean_unbox(v_fst_54_);
if (v___x_76_ == 0)
{
lean_object* v_fst_77_; uint8_t v___x_78_; 
lean_dec(v_fst_54_);
v_fst_77_ = lean_ctor_get(v_y_53_, 0);
v___x_78_ = lean_unbox(v_fst_77_);
v___y_60_ = v___x_78_;
goto v___jp_59_;
}
else
{
uint8_t v___x_79_; 
v___x_79_ = lean_unbox(v_fst_54_);
lean_dec(v_fst_54_);
v___y_60_ = v___x_79_;
goto v___jp_59_;
}
v___jp_59_:
{
uint8_t v___x_61_; 
v___x_61_ = lean_unbox(v_snd_55_);
if (v___x_61_ == 0)
{
lean_object* v_snd_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_70_; 
lean_del_object(v___x_57_);
lean_dec(v_snd_55_);
v_snd_62_ = lean_ctor_get(v_y_53_, 1);
v_isSharedCheck_70_ = !lean_is_exclusive(v_y_53_);
if (v_isSharedCheck_70_ == 0)
{
lean_object* v_unused_71_; 
v_unused_71_ = lean_ctor_get(v_y_53_, 0);
lean_dec(v_unused_71_);
v___x_64_ = v_y_53_;
v_isShared_65_ = v_isSharedCheck_70_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_snd_62_);
lean_dec(v_y_53_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_70_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v___x_66_; lean_object* v___x_68_; 
v___x_66_ = lean_box(v___y_60_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 0, v___x_66_);
v___x_68_ = v___x_64_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v___x_66_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v_snd_62_);
v___x_68_ = v_reuseFailAlloc_69_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
return v___x_68_;
}
}
}
else
{
lean_object* v___x_72_; lean_object* v___x_74_; 
lean_dec_ref(v_y_53_);
v___x_72_ = lean_box(v___y_60_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 0, v___x_72_);
v___x_74_ = v___x_57_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v___x_72_);
lean_ctor_set(v_reuseFailAlloc_75_, 1, v_snd_55_);
v___x_74_ = v_reuseFailAlloc_75_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
return v___x_74_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_tau(lean_object* v_x_81_){
_start:
{
lean_object* v_fst_82_; lean_object* v_snd_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_105_; 
v_fst_82_ = lean_ctor_get(v_x_81_, 0);
v_snd_83_ = lean_ctor_get(v_x_81_, 1);
v_isSharedCheck_105_ = !lean_is_exclusive(v_x_81_);
if (v_isSharedCheck_105_ == 0)
{
v___x_85_ = v_x_81_;
v_isShared_86_ = v_isSharedCheck_105_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_snd_83_);
lean_inc(v_fst_82_);
lean_dec(v_x_81_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_105_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
uint8_t v___y_88_; uint8_t v___x_102_; 
v___x_102_ = lean_unbox(v_fst_82_);
lean_dec(v_fst_82_);
if (v___x_102_ == 0)
{
uint8_t v___x_103_; 
v___x_103_ = 1;
v___y_88_ = v___x_103_;
goto v___jp_87_;
}
else
{
uint8_t v___x_104_; 
v___x_104_ = 0;
v___y_88_ = v___x_104_;
goto v___jp_87_;
}
v___jp_87_:
{
uint8_t v___x_89_; 
v___x_89_ = lean_unbox(v_snd_83_);
lean_dec(v_snd_83_);
if (v___x_89_ == 0)
{
uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_94_; 
v___x_90_ = 1;
v___x_91_ = lean_box(v___y_88_);
v___x_92_ = lean_box(v___x_90_);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 1, v___x_92_);
lean_ctor_set(v___x_85_, 0, v___x_91_);
v___x_94_ = v___x_85_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_91_);
lean_ctor_set(v_reuseFailAlloc_95_, 1, v___x_92_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
else
{
uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_100_; 
v___x_96_ = 0;
v___x_97_ = lean_box(v___y_88_);
v___x_98_ = lean_box(v___x_96_);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 1, v___x_98_);
lean_ctor_set(v___x_85_, 0, v___x_97_);
v___x_100_ = v___x_85_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_97_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v___x_98_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_add(lean_object* v_x_106_, lean_object* v_y_107_){
_start:
{
uint8_t v___y_109_; uint8_t v___y_115_; lean_object* v_fst_120_; lean_object* v_snd_121_; lean_object* v_fst_122_; lean_object* v_snd_123_; uint8_t v___y_125_; uint8_t v___x_133_; 
v_fst_120_ = lean_ctor_get(v_x_106_, 0);
v_snd_121_ = lean_ctor_get(v_x_106_, 1);
v_fst_122_ = lean_ctor_get(v_y_107_, 0);
v_snd_123_ = lean_ctor_get(v_y_107_, 1);
v___x_133_ = lean_unbox(v_fst_120_);
if (v___x_133_ == 0)
{
uint8_t v___x_134_; 
v___x_134_ = lean_unbox(v_fst_122_);
if (v___x_134_ == 0)
{
goto v___jp_131_;
}
else
{
goto v___jp_129_;
}
}
else
{
uint8_t v___x_135_; 
v___x_135_ = lean_unbox(v_fst_122_);
if (v___x_135_ == 0)
{
goto v___jp_129_;
}
else
{
goto v___jp_131_;
}
}
v___jp_108_:
{
uint8_t v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_110_ = 1;
v___x_111_ = lean_box(v___y_109_);
v___x_112_ = lean_box(v___x_110_);
v___x_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
return v___x_113_;
}
v___jp_114_:
{
uint8_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_116_ = 0;
v___x_117_ = lean_box(v___y_115_);
v___x_118_ = lean_box(v___x_116_);
v___x_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_117_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
return v___x_119_;
}
v___jp_124_:
{
uint8_t v___x_126_; 
v___x_126_ = lean_unbox(v_snd_121_);
if (v___x_126_ == 0)
{
uint8_t v___x_127_; 
v___x_127_ = lean_unbox(v_snd_123_);
if (v___x_127_ == 0)
{
v___y_115_ = v___y_125_;
goto v___jp_114_;
}
else
{
v___y_109_ = v___y_125_;
goto v___jp_108_;
}
}
else
{
uint8_t v___x_128_; 
v___x_128_ = lean_unbox(v_snd_123_);
if (v___x_128_ == 0)
{
v___y_109_ = v___y_125_;
goto v___jp_108_;
}
else
{
v___y_115_ = v___y_125_;
goto v___jp_114_;
}
}
}
v___jp_129_:
{
uint8_t v___x_130_; 
v___x_130_ = 1;
v___y_125_ = v___x_130_;
goto v___jp_124_;
}
v___jp_131_:
{
uint8_t v___x_132_; 
v___x_132_ = 0;
v___y_125_ = v___x_132_;
goto v___jp_124_;
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_add___boxed(lean_object* v_x_136_, lean_object* v_y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = lp_Demorgan3_Demorgan3_add(v_x_136_, v_y_137_);
lean_dec_ref(v_y_137_);
lean_dec_ref(v_x_136_);
return v_res_138_;
}
}
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_rho(lean_object* v_x_139_){
_start:
{
lean_object* v_fst_140_; uint8_t v___x_141_; 
v_fst_140_ = lean_ctor_get(v_x_139_, 0);
v___x_141_ = lean_unbox(v_fst_140_);
if (v___x_141_ == 0)
{
lean_object* v_snd_142_; uint8_t v___x_143_; 
v_snd_142_ = lean_ctor_get(v_x_139_, 1);
v___x_143_ = lean_unbox(v_snd_142_);
return v___x_143_;
}
else
{
lean_object* v_snd_144_; uint8_t v___x_145_; 
v_snd_144_ = lean_ctor_get(v_x_139_, 1);
v___x_145_ = lean_unbox(v_snd_144_);
if (v___x_145_ == 0)
{
uint8_t v___x_146_; 
v___x_146_ = lean_unbox(v_fst_140_);
return v___x_146_;
}
else
{
uint8_t v___x_147_; 
v___x_147_ = 0;
return v___x_147_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_rho___boxed(lean_object* v_x_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = lp_Demorgan3_Demorgan3_rho(v_x_148_);
lean_dec_ref(v_x_148_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
static lean_object* _init_lp_Demorgan3_Demorgan3_W__A___closed__0(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_unsigned_to_nat(0u);
v___x_152_ = lean_nat_to_int(v___x_151_);
return v___x_152_;
}
}
static lean_object* _init_lp_Demorgan3_Demorgan3_W__A___closed__1(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_unsigned_to_nat(1u);
v___x_154_ = lean_nat_to_int(v___x_153_);
return v___x_154_;
}
}
static lean_object* _init_lp_Demorgan3_Demorgan3_W__A___closed__2(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_obj_once(&lp_Demorgan3_Demorgan3_W__A___closed__1, &lp_Demorgan3_Demorgan3_W__A___closed__1_once, _init_lp_Demorgan3_Demorgan3_W__A___closed__1);
v___x_156_ = lean_int_neg(v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_W__A(lean_object* v_x_157_){
_start:
{
lean_object* v_fst_160_; uint8_t v___x_161_; 
v_fst_160_ = lean_ctor_get(v_x_157_, 0);
v___x_161_ = lean_unbox(v_fst_160_);
if (v___x_161_ == 0)
{
lean_object* v_snd_162_; uint8_t v___x_163_; 
v_snd_162_ = lean_ctor_get(v_x_157_, 1);
v___x_163_ = lean_unbox(v_snd_162_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; 
v___x_164_ = lean_obj_once(&lp_Demorgan3_Demorgan3_W__A___closed__1, &lp_Demorgan3_Demorgan3_W__A___closed__1_once, _init_lp_Demorgan3_Demorgan3_W__A___closed__1);
return v___x_164_;
}
else
{
goto v___jp_158_;
}
}
else
{
lean_object* v_snd_165_; uint8_t v___x_166_; 
v_snd_165_ = lean_ctor_get(v_x_157_, 1);
v___x_166_ = lean_unbox(v_snd_165_);
if (v___x_166_ == 0)
{
goto v___jp_158_;
}
else
{
lean_object* v___x_167_; 
v___x_167_ = lean_obj_once(&lp_Demorgan3_Demorgan3_W__A___closed__2, &lp_Demorgan3_Demorgan3_W__A___closed__2_once, _init_lp_Demorgan3_Demorgan3_W__A___closed__2);
return v___x_167_;
}
}
v___jp_158_:
{
lean_object* v___x_159_; 
v___x_159_ = lean_obj_once(&lp_Demorgan3_Demorgan3_W__A___closed__0, &lp_Demorgan3_Demorgan3_W__A___closed__0_once, _init_lp_Demorgan3_Demorgan3_W__A___closed__0);
return v___x_159_;
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_W__A___boxed(lean_object* v_x_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = lp_Demorgan3_Demorgan3_W__A(v_x_168_);
lean_dec_ref(v_x_168_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_W__B(lean_object* v_x_170_){
_start:
{
lean_object* v_fst_173_; uint8_t v___x_174_; 
v_fst_173_ = lean_ctor_get(v_x_170_, 0);
v___x_174_ = lean_unbox(v_fst_173_);
if (v___x_174_ == 0)
{
lean_object* v_snd_175_; uint8_t v___x_176_; 
v_snd_175_ = lean_ctor_get(v_x_170_, 1);
v___x_176_ = lean_unbox(v_snd_175_);
if (v___x_176_ == 0)
{
goto v___jp_171_;
}
else
{
lean_object* v___x_177_; 
v___x_177_ = lean_obj_once(&lp_Demorgan3_Demorgan3_W__A___closed__2, &lp_Demorgan3_Demorgan3_W__A___closed__2_once, _init_lp_Demorgan3_Demorgan3_W__A___closed__2);
return v___x_177_;
}
}
else
{
lean_object* v_snd_178_; uint8_t v___x_179_; 
v_snd_178_ = lean_ctor_get(v_x_170_, 1);
v___x_179_ = lean_unbox(v_snd_178_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; 
v___x_180_ = lean_obj_once(&lp_Demorgan3_Demorgan3_W__A___closed__1, &lp_Demorgan3_Demorgan3_W__A___closed__1_once, _init_lp_Demorgan3_Demorgan3_W__A___closed__1);
return v___x_180_;
}
else
{
goto v___jp_171_;
}
}
v___jp_171_:
{
lean_object* v___x_172_; 
v___x_172_ = lean_obj_once(&lp_Demorgan3_Demorgan3_W__A___closed__0, &lp_Demorgan3_Demorgan3_W__A___closed__0_once, _init_lp_Demorgan3_Demorgan3_W__A___closed__0);
return v___x_172_;
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_W__B___boxed(lean_object* v_x_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = lp_Demorgan3_Demorgan3_W__B(v_x_181_);
lean_dec_ref(v_x_181_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_cW(lean_object* v_W_183_, lean_object* v_x_184_, lean_object* v_y_185_, lean_object* v_z_186_){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
lean_inc_ref(v_y_185_);
lean_inc_ref(v_x_184_);
v___x_187_ = lp_Demorgan3_Demorgan3_join(v_x_184_, v_y_185_);
lean_inc_ref_n(v_z_186_, 3);
lean_inc_ref(v___x_187_);
v___x_188_ = lp_Demorgan3_Demorgan3_join(v___x_187_, v_z_186_);
lean_inc_ref_n(v_W_183_, 3);
v___x_189_ = lean_apply_1(v_W_183_, v___x_188_);
v___x_190_ = lp_Demorgan3_Demorgan3_meet(v___x_187_, v_z_186_);
v___x_191_ = lean_apply_1(v_W_183_, v___x_190_);
v___x_192_ = lean_int_sub(v___x_189_, v___x_191_);
lean_dec(v___x_191_);
lean_dec(v___x_189_);
v___x_193_ = lp_Demorgan3_Demorgan3_meet(v_x_184_, v_y_185_);
lean_inc_ref(v___x_193_);
v___x_194_ = lp_Demorgan3_Demorgan3_join(v___x_193_, v_z_186_);
v___x_195_ = lean_apply_1(v_W_183_, v___x_194_);
v___x_196_ = lean_int_sub(v___x_192_, v___x_195_);
lean_dec(v___x_195_);
lean_dec(v___x_192_);
v___x_197_ = lp_Demorgan3_Demorgan3_meet(v___x_193_, v_z_186_);
v___x_198_ = lean_apply_1(v_W_183_, v___x_197_);
v___x_199_ = lean_int_add(v___x_196_, v___x_198_);
lean_dec(v___x_198_);
lean_dec(v___x_196_);
return v___x_199_;
}
}
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_decForallBool___redArg(lean_object* v_inst_200_){
_start:
{
uint8_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; uint8_t v___x_204_; 
v___x_201_ = 0;
v___x_202_ = lean_box(v___x_201_);
lean_inc_ref(v_inst_200_);
v___x_203_ = lean_apply_1(v_inst_200_, v___x_202_);
v___x_204_ = lean_unbox(v___x_203_);
if (v___x_204_ == 0)
{
uint8_t v___x_205_; 
lean_dec_ref(v_inst_200_);
v___x_205_ = lean_unbox(v___x_203_);
return v___x_205_;
}
else
{
lean_object* v___x_206_; uint8_t v___x_207_; 
v___x_206_ = lean_apply_1(v_inst_200_, v___x_203_);
v___x_207_ = lean_unbox(v___x_206_);
return v___x_207_;
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_decForallBool___redArg___boxed(lean_object* v_inst_208_){
_start:
{
uint8_t v_res_209_; lean_object* v_r_210_; 
v_res_209_ = lp_Demorgan3_Demorgan3_decForallBool___redArg(v_inst_208_);
v_r_210_ = lean_box(v_res_209_);
return v_r_210_;
}
}
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_decForallBool(lean_object* v_p_211_, lean_object* v_inst_212_){
_start:
{
uint8_t v___x_213_; 
v___x_213_ = lp_Demorgan3_Demorgan3_decForallBool___redArg(v_inst_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_decForallBool___boxed(lean_object* v_p_214_, lean_object* v_inst_215_){
_start:
{
uint8_t v_res_216_; lean_object* v_r_217_; 
v_res_216_ = lp_Demorgan3_Demorgan3_decForallBool(v_p_214_, v_inst_215_);
v_r_217_ = lean_box(v_res_216_);
return v_r_217_;
}
}
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_decForallL___redArg(lean_object* v_inst_218_){
_start:
{
uint8_t v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_219_ = 0;
v___x_220_ = ((lean_object*)(lp_Demorgan3_Demorgan3_UNK___closed__0));
lean_inc_ref(v_inst_218_);
v___x_221_ = lean_apply_1(v_inst_218_, v___x_220_);
v___x_222_ = lean_unbox(v___x_221_);
if (v___x_222_ == 0)
{
uint8_t v___x_223_; 
lean_dec_ref(v_inst_218_);
v___x_223_ = lean_unbox(v___x_221_);
return v___x_223_;
}
else
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_224_ = lean_box(v___x_219_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
lean_ctor_set(v___x_225_, 1, v___x_221_);
lean_inc_ref(v_inst_218_);
v___x_226_ = lean_apply_1(v_inst_218_, v___x_225_);
v___x_227_ = lean_unbox(v___x_226_);
if (v___x_227_ == 0)
{
uint8_t v___x_228_; 
lean_dec_ref(v_inst_218_);
v___x_228_ = lean_unbox(v___x_226_);
return v___x_228_;
}
else
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_229_ = lean_box(v___x_219_);
v___x_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_221_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
lean_inc_ref(v_inst_218_);
v___x_231_ = lean_apply_1(v_inst_218_, v___x_230_);
v___x_232_ = lean_unbox(v___x_231_);
if (v___x_232_ == 0)
{
uint8_t v___x_233_; 
lean_dec_ref(v_inst_218_);
v___x_233_ = lean_unbox(v___x_231_);
return v___x_233_;
}
else
{
lean_object* v___x_234_; lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_221_);
lean_ctor_set(v___x_234_, 1, v___x_221_);
v___x_235_ = lean_apply_1(v_inst_218_, v___x_234_);
v___x_236_ = lean_unbox(v___x_235_);
return v___x_236_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_decForallL___redArg___boxed(lean_object* v_inst_237_){
_start:
{
uint8_t v_res_238_; lean_object* v_r_239_; 
v_res_238_ = lp_Demorgan3_Demorgan3_decForallL___redArg(v_inst_237_);
v_r_239_ = lean_box(v_res_238_);
return v_r_239_;
}
}
LEAN_EXPORT uint8_t lp_Demorgan3_Demorgan3_decForallL(lean_object* v_p_240_, lean_object* v_inst_241_){
_start:
{
uint8_t v___x_242_; 
v___x_242_ = lp_Demorgan3_Demorgan3_decForallL___redArg(v_inst_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* lp_Demorgan3_Demorgan3_decForallL___boxed(lean_object* v_p_243_, lean_object* v_inst_244_){
_start:
{
uint8_t v_res_245_; lean_object* v_r_246_; 
v_res_245_ = lp_Demorgan3_Demorgan3_decForallL(v_p_243_, v_inst_244_);
v_r_246_ = lean_box(v_res_245_);
return v_r_246_;
}
}
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__A_match__1_splitter___redArg(lean_object* v_x_247_, lean_object* v_h__1_248_, lean_object* v_h__2_249_, lean_object* v_h__3_250_, lean_object* v_h__4_251_){
_start:
{
lean_object* v_fst_252_; uint8_t v___x_253_; 
v_fst_252_ = lean_ctor_get(v_x_247_, 0);
v___x_253_ = lean_unbox(v_fst_252_);
if (v___x_253_ == 0)
{
lean_object* v_snd_254_; uint8_t v___x_255_; 
lean_dec(v_h__3_250_);
lean_dec(v_h__2_249_);
v_snd_254_ = lean_ctor_get(v_x_247_, 1);
v___x_255_ = lean_unbox(v_snd_254_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; lean_object* v___x_257_; 
lean_dec(v_h__4_251_);
v___x_256_ = lean_box(0);
v___x_257_ = lean_apply_1(v_h__1_248_, v___x_256_);
return v___x_257_;
}
else
{
lean_object* v___x_258_; lean_object* v___x_259_; 
lean_dec(v_h__1_248_);
v___x_258_ = lean_box(0);
v___x_259_ = lean_apply_1(v_h__4_251_, v___x_258_);
return v___x_259_;
}
}
else
{
lean_object* v_snd_260_; uint8_t v___x_261_; 
lean_dec(v_h__4_251_);
lean_dec(v_h__1_248_);
v_snd_260_ = lean_ctor_get(v_x_247_, 1);
v___x_261_ = lean_unbox(v_snd_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_263_; 
lean_dec(v_h__2_249_);
v___x_262_ = lean_box(0);
v___x_263_ = lean_apply_1(v_h__3_250_, v___x_262_);
return v___x_263_;
}
else
{
lean_object* v___x_264_; lean_object* v___x_265_; 
lean_dec(v_h__3_250_);
v___x_264_ = lean_box(0);
v___x_265_ = lean_apply_1(v_h__2_249_, v___x_264_);
return v___x_265_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__A_match__1_splitter___redArg___boxed(lean_object* v_x_266_, lean_object* v_h__1_267_, lean_object* v_h__2_268_, lean_object* v_h__3_269_, lean_object* v_h__4_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__A_match__1_splitter___redArg(v_x_266_, v_h__1_267_, v_h__2_268_, v_h__3_269_, v_h__4_270_);
lean_dec_ref(v_x_266_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__A_match__1_splitter(lean_object* v_motive_272_, lean_object* v_x_273_, lean_object* v_h__1_274_, lean_object* v_h__2_275_, lean_object* v_h__3_276_, lean_object* v_h__4_277_){
_start:
{
lean_object* v_fst_278_; uint8_t v___x_279_; 
v_fst_278_ = lean_ctor_get(v_x_273_, 0);
v___x_279_ = lean_unbox(v_fst_278_);
if (v___x_279_ == 0)
{
lean_object* v_snd_280_; uint8_t v___x_281_; 
lean_dec(v_h__3_276_);
lean_dec(v_h__2_275_);
v_snd_280_ = lean_ctor_get(v_x_273_, 1);
v___x_281_ = lean_unbox(v_snd_280_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; lean_object* v___x_283_; 
lean_dec(v_h__4_277_);
v___x_282_ = lean_box(0);
v___x_283_ = lean_apply_1(v_h__1_274_, v___x_282_);
return v___x_283_;
}
else
{
lean_object* v___x_284_; lean_object* v___x_285_; 
lean_dec(v_h__1_274_);
v___x_284_ = lean_box(0);
v___x_285_ = lean_apply_1(v_h__4_277_, v___x_284_);
return v___x_285_;
}
}
else
{
lean_object* v_snd_286_; uint8_t v___x_287_; 
lean_dec(v_h__4_277_);
lean_dec(v_h__1_274_);
v_snd_286_ = lean_ctor_get(v_x_273_, 1);
v___x_287_ = lean_unbox(v_snd_286_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; lean_object* v___x_289_; 
lean_dec(v_h__2_275_);
v___x_288_ = lean_box(0);
v___x_289_ = lean_apply_1(v_h__3_276_, v___x_288_);
return v___x_289_;
}
else
{
lean_object* v___x_290_; lean_object* v___x_291_; 
lean_dec(v_h__3_276_);
v___x_290_ = lean_box(0);
v___x_291_ = lean_apply_1(v_h__2_275_, v___x_290_);
return v___x_291_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__A_match__1_splitter___boxed(lean_object* v_motive_292_, lean_object* v_x_293_, lean_object* v_h__1_294_, lean_object* v_h__2_295_, lean_object* v_h__3_296_, lean_object* v_h__4_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__A_match__1_splitter(v_motive_292_, v_x_293_, v_h__1_294_, v_h__2_295_, v_h__3_296_, v_h__4_297_);
lean_dec_ref(v_x_293_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__B_match__1_splitter___redArg(lean_object* v_x_299_, lean_object* v_h__1_300_, lean_object* v_h__2_301_, lean_object* v_h__3_302_, lean_object* v_h__4_303_){
_start:
{
lean_object* v_fst_304_; uint8_t v___x_305_; 
v_fst_304_ = lean_ctor_get(v_x_299_, 0);
v___x_305_ = lean_unbox(v_fst_304_);
if (v___x_305_ == 0)
{
lean_object* v_snd_306_; uint8_t v___x_307_; 
lean_dec(v_h__4_303_);
lean_dec(v_h__1_300_);
v_snd_306_ = lean_ctor_get(v_x_299_, 1);
v___x_307_ = lean_unbox(v_snd_306_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; lean_object* v___x_309_; 
lean_dec(v_h__2_301_);
v___x_308_ = lean_box(0);
v___x_309_ = lean_apply_1(v_h__3_302_, v___x_308_);
return v___x_309_;
}
else
{
lean_object* v___x_310_; lean_object* v___x_311_; 
lean_dec(v_h__3_302_);
v___x_310_ = lean_box(0);
v___x_311_ = lean_apply_1(v_h__2_301_, v___x_310_);
return v___x_311_;
}
}
else
{
lean_object* v_snd_312_; uint8_t v___x_313_; 
lean_dec(v_h__3_302_);
lean_dec(v_h__2_301_);
v_snd_312_ = lean_ctor_get(v_x_299_, 1);
v___x_313_ = lean_unbox(v_snd_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; lean_object* v___x_315_; 
lean_dec(v_h__4_303_);
v___x_314_ = lean_box(0);
v___x_315_ = lean_apply_1(v_h__1_300_, v___x_314_);
return v___x_315_;
}
else
{
lean_object* v___x_316_; lean_object* v___x_317_; 
lean_dec(v_h__1_300_);
v___x_316_ = lean_box(0);
v___x_317_ = lean_apply_1(v_h__4_303_, v___x_316_);
return v___x_317_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__B_match__1_splitter___redArg___boxed(lean_object* v_x_318_, lean_object* v_h__1_319_, lean_object* v_h__2_320_, lean_object* v_h__3_321_, lean_object* v_h__4_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__B_match__1_splitter___redArg(v_x_318_, v_h__1_319_, v_h__2_320_, v_h__3_321_, v_h__4_322_);
lean_dec_ref(v_x_318_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__B_match__1_splitter(lean_object* v_motive_324_, lean_object* v_x_325_, lean_object* v_h__1_326_, lean_object* v_h__2_327_, lean_object* v_h__3_328_, lean_object* v_h__4_329_){
_start:
{
lean_object* v_fst_330_; uint8_t v___x_331_; 
v_fst_330_ = lean_ctor_get(v_x_325_, 0);
v___x_331_ = lean_unbox(v_fst_330_);
if (v___x_331_ == 0)
{
lean_object* v_snd_332_; uint8_t v___x_333_; 
lean_dec(v_h__4_329_);
lean_dec(v_h__1_326_);
v_snd_332_ = lean_ctor_get(v_x_325_, 1);
v___x_333_ = lean_unbox(v_snd_332_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; lean_object* v___x_335_; 
lean_dec(v_h__2_327_);
v___x_334_ = lean_box(0);
v___x_335_ = lean_apply_1(v_h__3_328_, v___x_334_);
return v___x_335_;
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; 
lean_dec(v_h__3_328_);
v___x_336_ = lean_box(0);
v___x_337_ = lean_apply_1(v_h__2_327_, v___x_336_);
return v___x_337_;
}
}
else
{
lean_object* v_snd_338_; uint8_t v___x_339_; 
lean_dec(v_h__3_328_);
lean_dec(v_h__2_327_);
v_snd_338_ = lean_ctor_get(v_x_325_, 1);
v___x_339_ = lean_unbox(v_snd_338_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; lean_object* v___x_341_; 
lean_dec(v_h__4_329_);
v___x_340_ = lean_box(0);
v___x_341_ = lean_apply_1(v_h__1_326_, v___x_340_);
return v___x_341_;
}
else
{
lean_object* v___x_342_; lean_object* v___x_343_; 
lean_dec(v_h__1_326_);
v___x_342_ = lean_box(0);
v___x_343_ = lean_apply_1(v_h__4_329_, v___x_342_);
return v___x_343_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__B_match__1_splitter___boxed(lean_object* v_motive_344_, lean_object* v_x_345_, lean_object* v_h__1_346_, lean_object* v_h__2_347_, lean_object* v_h__3_348_, lean_object* v_h__4_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = lp_Demorgan3___private_Demorgan3_Basic_0__Demorgan3_W__B_match__1_splitter(v_motive_344_, v_x_345_, v_h__1_346_, v_h__2_347_, v_h__3_348_, v_h__4_349_);
lean_dec_ref(v_x_345_);
return v_res_350_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Demorgan3_Demorgan3_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
