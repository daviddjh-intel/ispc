/*
  Copyright (c) 2024-2025, Intel Corporation

  SPDX-License-Identifier: BSD-3-Clause
*/

#include "builtins-decl.h"

#define DECL_BUILTIN_NAME(NAME) const char *const NAME = #NAME

namespace ispc {

namespace builtin {

DECL_BUILTIN_NAME(__all);
DECL_BUILTIN_NAME(__any);
DECL_BUILTIN_NAME(__avg_down_int16);
DECL_BUILTIN_NAME(__avg_down_int8);
DECL_BUILTIN_NAME(__avg_down_uint16);
DECL_BUILTIN_NAME(__avg_down_uint8);
DECL_BUILTIN_NAME(__avg_up_int16);
DECL_BUILTIN_NAME(__avg_up_int8);
DECL_BUILTIN_NAME(__avg_up_uint16);
DECL_BUILTIN_NAME(__avg_up_uint8);
DECL_BUILTIN_NAME(__count_leading_zeros_uniform_i32);
DECL_BUILTIN_NAME(__count_leading_zeros_uniform_i64);
DECL_BUILTIN_NAME(__count_trailing_zeros_uniform_i32);
DECL_BUILTIN_NAME(__count_trailing_zeros_uniform_i64);
DECL_BUILTIN_NAME(__delete_uniform_32rt);
DECL_BUILTIN_NAME(__delete_uniform_64rt);
DECL_BUILTIN_NAME(__delete_varying_32rt);
DECL_BUILTIN_NAME(__delete_varying_64rt);
DECL_BUILTIN_NAME(__do_assert_uniform);
DECL_BUILTIN_NAME(__do_assert_varying);
DECL_BUILTIN_NAME(__do_assume_uniform);
DECL_BUILTIN_NAME(__do_print);
DECL_BUILTIN_NAME(__fast_masked_vload);
DECL_BUILTIN_NAME(__gather32_double);
DECL_BUILTIN_NAME(__gather32_float);
DECL_BUILTIN_NAME(__gather32_generic_double);
DECL_BUILTIN_NAME(__gather32_generic_float);
DECL_BUILTIN_NAME(__gather32_generic_half);
DECL_BUILTIN_NAME(__gather32_generic_i16);
DECL_BUILTIN_NAME(__gather32_generic_i32);
DECL_BUILTIN_NAME(__gather32_generic_i64);
DECL_BUILTIN_NAME(__gather32_generic_i8);
DECL_BUILTIN_NAME(__gather32_half);
DECL_BUILTIN_NAME(__gather32_i16);
DECL_BUILTIN_NAME(__gather32_i32);
DECL_BUILTIN_NAME(__gather32_i64);
DECL_BUILTIN_NAME(__gather32_i8);
DECL_BUILTIN_NAME(__gather64_double);
DECL_BUILTIN_NAME(__gather64_float);
DECL_BUILTIN_NAME(__gather64_generic_double);
DECL_BUILTIN_NAME(__gather64_generic_float);
DECL_BUILTIN_NAME(__gather64_generic_half);
DECL_BUILTIN_NAME(__gather64_generic_i16);
DECL_BUILTIN_NAME(__gather64_generic_i32);
DECL_BUILTIN_NAME(__gather64_generic_i64);
DECL_BUILTIN_NAME(__gather64_generic_i8);
DECL_BUILTIN_NAME(__gather64_half);
DECL_BUILTIN_NAME(__gather64_i16);
DECL_BUILTIN_NAME(__gather64_i32);
DECL_BUILTIN_NAME(__gather64_i64);
DECL_BUILTIN_NAME(__gather64_i8);
DECL_BUILTIN_NAME(__gather_base_offsets32_double);
DECL_BUILTIN_NAME(__gather_base_offsets32_float);
DECL_BUILTIN_NAME(__gather_base_offsets32_half);
DECL_BUILTIN_NAME(__gather_base_offsets32_i16);
DECL_BUILTIN_NAME(__gather_base_offsets32_i32);
DECL_BUILTIN_NAME(__gather_base_offsets32_i64);
DECL_BUILTIN_NAME(__gather_base_offsets32_i8);
DECL_BUILTIN_NAME(__gather_base_offsets64_double);
DECL_BUILTIN_NAME(__gather_base_offsets64_float);
DECL_BUILTIN_NAME(__gather_base_offsets64_half);
DECL_BUILTIN_NAME(__gather_base_offsets64_i16);
DECL_BUILTIN_NAME(__gather_base_offsets64_i32);
DECL_BUILTIN_NAME(__gather_base_offsets64_i64);
DECL_BUILTIN_NAME(__gather_base_offsets64_i8);
DECL_BUILTIN_NAME(__gather_factored_base_offsets32_double);
DECL_BUILTIN_NAME(__gather_factored_base_offsets32_float);
DECL_BUILTIN_NAME(__gather_factored_base_offsets32_half);
DECL_BUILTIN_NAME(__gather_factored_base_offsets32_i16);
DECL_BUILTIN_NAME(__gather_factored_base_offsets32_i32);
DECL_BUILTIN_NAME(__gather_factored_base_offsets32_i64);
DECL_BUILTIN_NAME(__gather_factored_base_offsets32_i8);
DECL_BUILTIN_NAME(__gather_factored_base_offsets64_double);
DECL_BUILTIN_NAME(__gather_factored_base_offsets64_float);
DECL_BUILTIN_NAME(__gather_factored_base_offsets64_half);
DECL_BUILTIN_NAME(__gather_factored_base_offsets64_i16);
DECL_BUILTIN_NAME(__gather_factored_base_offsets64_i32);
DECL_BUILTIN_NAME(__gather_factored_base_offsets64_i64);
DECL_BUILTIN_NAME(__gather_factored_base_offsets64_i8);
DECL_BUILTIN_NAME(__is_compile_time_constant_mask);
DECL_BUILTIN_NAME(__is_compile_time_constant_uniform_int32);
DECL_BUILTIN_NAME(__is_compile_time_constant_varying_int32);
DECL_BUILTIN_NAME(ISPCAlloc);
DECL_BUILTIN_NAME(ISPCLaunch);
DECL_BUILTIN_NAME(ISPCSync);
DECL_BUILTIN_NAME(ISPCInstrument);
DECL_BUILTIN_NAME(__masked_load_blend_double);
DECL_BUILTIN_NAME(__masked_load_blend_float);
DECL_BUILTIN_NAME(__masked_load_blend_half);
DECL_BUILTIN_NAME(__masked_load_blend_i16);
DECL_BUILTIN_NAME(__masked_load_blend_i32);
DECL_BUILTIN_NAME(__masked_load_blend_i64);
DECL_BUILTIN_NAME(__masked_load_blend_i8);
DECL_BUILTIN_NAME(__masked_load_double);
DECL_BUILTIN_NAME(__masked_load_float);
DECL_BUILTIN_NAME(__masked_load_half);
DECL_BUILTIN_NAME(__masked_load_i16);
DECL_BUILTIN_NAME(__masked_load_i32);
DECL_BUILTIN_NAME(__masked_load_i64);
DECL_BUILTIN_NAME(__masked_load_i8);
DECL_BUILTIN_NAME(__masked_store_blend_double);
DECL_BUILTIN_NAME(__masked_store_blend_float);
DECL_BUILTIN_NAME(__masked_store_blend_half);
DECL_BUILTIN_NAME(__masked_store_blend_i16);
DECL_BUILTIN_NAME(__masked_store_blend_i32);
DECL_BUILTIN_NAME(__masked_store_blend_i64);
DECL_BUILTIN_NAME(__masked_store_blend_i8);
DECL_BUILTIN_NAME(__masked_store_double);
DECL_BUILTIN_NAME(__masked_store_float);
DECL_BUILTIN_NAME(__masked_store_half);
DECL_BUILTIN_NAME(__masked_store_i16);
DECL_BUILTIN_NAME(__masked_store_i32);
DECL_BUILTIN_NAME(__masked_store_i64);
DECL_BUILTIN_NAME(__masked_store_i8);
DECL_BUILTIN_NAME(__movmsk);
DECL_BUILTIN_NAME(__new_uniform_32rt);
DECL_BUILTIN_NAME(__new_uniform_64rt);
DECL_BUILTIN_NAME(__new_varying32_32rt);
DECL_BUILTIN_NAME(__new_varying32_64rt);
DECL_BUILTIN_NAME(__new_varying64_64rt);
DECL_BUILTIN_NAME(__none);
DECL_BUILTIN_NAME(__num_cores);
DECL_BUILTIN_NAME(__prefetch_read_sized_uniform_1);
DECL_BUILTIN_NAME(__prefetch_read_sized_uniform_2);
DECL_BUILTIN_NAME(__prefetch_read_sized_uniform_3);
DECL_BUILTIN_NAME(__prefetch_read_sized_uniform_nt);
DECL_BUILTIN_NAME(__prefetch_read_sized_varying_1);
DECL_BUILTIN_NAME(__prefetch_read_sized_varying_2);
DECL_BUILTIN_NAME(__prefetch_read_sized_varying_3);
DECL_BUILTIN_NAME(__prefetch_read_sized_varying_nt);
DECL_BUILTIN_NAME(__prefetch_read_uniform_1);
DECL_BUILTIN_NAME(__prefetch_read_uniform_2);
DECL_BUILTIN_NAME(__prefetch_read_uniform_3);
DECL_BUILTIN_NAME(__prefetch_read_uniform_nt);
DECL_BUILTIN_NAME(__prefetch_read_varying_1);
DECL_BUILTIN_NAME(__prefetch_read_varying_1_native);
DECL_BUILTIN_NAME(__prefetch_read_varying_2);
DECL_BUILTIN_NAME(__prefetch_read_varying_2_native);
DECL_BUILTIN_NAME(__prefetch_read_varying_3);
DECL_BUILTIN_NAME(__prefetch_read_varying_3_native);
DECL_BUILTIN_NAME(__prefetch_read_varying_nt);
DECL_BUILTIN_NAME(__prefetch_read_varying_nt_native);
DECL_BUILTIN_NAME(__prefetch_write_uniform_1);
DECL_BUILTIN_NAME(__prefetch_write_uniform_2);
DECL_BUILTIN_NAME(__prefetch_write_uniform_3);
DECL_BUILTIN_NAME(__prefetch_write_varying_1);
DECL_BUILTIN_NAME(__prefetch_write_varying_1_native);
DECL_BUILTIN_NAME(__prefetch_write_varying_2);
DECL_BUILTIN_NAME(__prefetch_write_varying_2_native);
DECL_BUILTIN_NAME(__prefetch_write_varying_3);
DECL_BUILTIN_NAME(__prefetch_write_varying_3_native);
DECL_BUILTIN_NAME(__pseudo_gather32_double);
DECL_BUILTIN_NAME(__pseudo_gather32_float);
DECL_BUILTIN_NAME(__pseudo_gather32_half);
DECL_BUILTIN_NAME(__pseudo_gather32_i16);
DECL_BUILTIN_NAME(__pseudo_gather32_i32);
DECL_BUILTIN_NAME(__pseudo_gather32_i64);
DECL_BUILTIN_NAME(__pseudo_gather32_i8);
DECL_BUILTIN_NAME(__pseudo_gather64_double);
DECL_BUILTIN_NAME(__pseudo_gather64_float);
DECL_BUILTIN_NAME(__pseudo_gather64_half);
DECL_BUILTIN_NAME(__pseudo_gather64_i16);
DECL_BUILTIN_NAME(__pseudo_gather64_i32);
DECL_BUILTIN_NAME(__pseudo_gather64_i64);
DECL_BUILTIN_NAME(__pseudo_gather64_i8);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets32_double);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets32_float);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets32_half);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets32_i16);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets32_i32);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets32_i64);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets32_i8);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets64_double);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets64_float);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets64_half);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets64_i16);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets64_i32);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets64_i64);
DECL_BUILTIN_NAME(__pseudo_gather_base_offsets64_i8);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets32_double);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets32_float);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets32_half);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets32_i16);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets32_i32);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets32_i64);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets32_i8);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets64_double);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets64_float);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets64_half);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets64_i16);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets64_i32);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets64_i64);
DECL_BUILTIN_NAME(__pseudo_gather_factored_base_offsets64_i8);
DECL_BUILTIN_NAME(__pseudo_masked_store_double);
DECL_BUILTIN_NAME(__pseudo_masked_store_float);
DECL_BUILTIN_NAME(__pseudo_masked_store_half);
DECL_BUILTIN_NAME(__pseudo_masked_store_i16);
DECL_BUILTIN_NAME(__pseudo_masked_store_i32);
DECL_BUILTIN_NAME(__pseudo_masked_store_i64);
DECL_BUILTIN_NAME(__pseudo_masked_store_i8);
DECL_BUILTIN_NAME(__pseudo_prefetch_read_varying_1);
DECL_BUILTIN_NAME(__pseudo_prefetch_read_varying_1_native);
DECL_BUILTIN_NAME(__pseudo_prefetch_read_varying_2);
DECL_BUILTIN_NAME(__pseudo_prefetch_read_varying_2_native);
DECL_BUILTIN_NAME(__pseudo_prefetch_read_varying_3);
DECL_BUILTIN_NAME(__pseudo_prefetch_read_varying_3_native);
DECL_BUILTIN_NAME(__pseudo_prefetch_read_varying_nt);
DECL_BUILTIN_NAME(__pseudo_prefetch_read_varying_nt_native);
DECL_BUILTIN_NAME(__pseudo_prefetch_write_varying_1);
DECL_BUILTIN_NAME(__pseudo_prefetch_write_varying_1_native);
DECL_BUILTIN_NAME(__pseudo_prefetch_write_varying_2);
DECL_BUILTIN_NAME(__pseudo_prefetch_write_varying_2_native);
DECL_BUILTIN_NAME(__pseudo_prefetch_write_varying_3);
DECL_BUILTIN_NAME(__pseudo_prefetch_write_varying_3_native);
DECL_BUILTIN_NAME(__pseudo_scatter32_double);
DECL_BUILTIN_NAME(__pseudo_scatter32_float);
DECL_BUILTIN_NAME(__pseudo_scatter32_half);
DECL_BUILTIN_NAME(__pseudo_scatter32_i16);
DECL_BUILTIN_NAME(__pseudo_scatter32_i32);
DECL_BUILTIN_NAME(__pseudo_scatter32_i64);
DECL_BUILTIN_NAME(__pseudo_scatter32_i8);
DECL_BUILTIN_NAME(__pseudo_scatter64_double);
DECL_BUILTIN_NAME(__pseudo_scatter64_float);
DECL_BUILTIN_NAME(__pseudo_scatter64_half);
DECL_BUILTIN_NAME(__pseudo_scatter64_i16);
DECL_BUILTIN_NAME(__pseudo_scatter64_i32);
DECL_BUILTIN_NAME(__pseudo_scatter64_i64);
DECL_BUILTIN_NAME(__pseudo_scatter64_i8);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets32_double);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets32_float);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets32_half);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets32_i16);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets32_i32);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets32_i64);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets32_i8);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets64_double);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets64_float);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets64_half);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets64_i16);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets64_i32);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets64_i64);
DECL_BUILTIN_NAME(__pseudo_scatter_base_offsets64_i8);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets32_double);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets32_float);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets32_half);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets32_i16);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets32_i32);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets32_i64);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets32_i8);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets64_double);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets64_float);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets64_half);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets64_i16);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets64_i32);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets64_i64);
DECL_BUILTIN_NAME(__pseudo_scatter_factored_base_offsets64_i8);
DECL_BUILTIN_NAME(__restore_ftz_daz_flags);
DECL_BUILTIN_NAME(__scatter32_double);
DECL_BUILTIN_NAME(__scatter32_float);
DECL_BUILTIN_NAME(__scatter32_generic_double);
DECL_BUILTIN_NAME(__scatter32_generic_float);
DECL_BUILTIN_NAME(__scatter32_generic_half);
DECL_BUILTIN_NAME(__scatter32_generic_i16);
DECL_BUILTIN_NAME(__scatter32_generic_i32);
DECL_BUILTIN_NAME(__scatter32_generic_i64);
DECL_BUILTIN_NAME(__scatter32_generic_i8);
DECL_BUILTIN_NAME(__scatter32_half);
DECL_BUILTIN_NAME(__scatter32_i16);
DECL_BUILTIN_NAME(__scatter32_i32);
DECL_BUILTIN_NAME(__scatter32_i64);
DECL_BUILTIN_NAME(__scatter32_i8);
DECL_BUILTIN_NAME(__scatter64_double);
DECL_BUILTIN_NAME(__scatter64_float);
DECL_BUILTIN_NAME(__scatter64_generic_double);
DECL_BUILTIN_NAME(__scatter64_generic_float);
DECL_BUILTIN_NAME(__scatter64_generic_half);
DECL_BUILTIN_NAME(__scatter64_generic_i16);
DECL_BUILTIN_NAME(__scatter64_generic_i32);
DECL_BUILTIN_NAME(__scatter64_generic_i64);
DECL_BUILTIN_NAME(__scatter64_generic_i8);
DECL_BUILTIN_NAME(__scatter64_half);
DECL_BUILTIN_NAME(__scatter64_i16);
DECL_BUILTIN_NAME(__scatter64_i32);
DECL_BUILTIN_NAME(__scatter64_i64);
DECL_BUILTIN_NAME(__scatter64_i8);
DECL_BUILTIN_NAME(__scatter_base_offsets32_double);
DECL_BUILTIN_NAME(__scatter_base_offsets32_float);
DECL_BUILTIN_NAME(__scatter_base_offsets32_half);
DECL_BUILTIN_NAME(__scatter_base_offsets32_i16);
DECL_BUILTIN_NAME(__scatter_base_offsets32_i32);
DECL_BUILTIN_NAME(__scatter_base_offsets32_i64);
DECL_BUILTIN_NAME(__scatter_base_offsets32_i8);
DECL_BUILTIN_NAME(__scatter_base_offsets64_double);
DECL_BUILTIN_NAME(__scatter_base_offsets64_float);
DECL_BUILTIN_NAME(__scatter_base_offsets64_half);
DECL_BUILTIN_NAME(__scatter_base_offsets64_i16);
DECL_BUILTIN_NAME(__scatter_base_offsets64_i32);
DECL_BUILTIN_NAME(__scatter_base_offsets64_i64);
DECL_BUILTIN_NAME(__scatter_base_offsets64_i8);
DECL_BUILTIN_NAME(__scatter_elt32_double);
DECL_BUILTIN_NAME(__scatter_elt32_float);
DECL_BUILTIN_NAME(__scatter_elt32_half);
DECL_BUILTIN_NAME(__scatter_elt32_i16);
DECL_BUILTIN_NAME(__scatter_elt32_i32);
DECL_BUILTIN_NAME(__scatter_elt32_i64);
DECL_BUILTIN_NAME(__scatter_elt32_i8);
DECL_BUILTIN_NAME(__scatter_elt64_double);
DECL_BUILTIN_NAME(__scatter_elt64_float);
DECL_BUILTIN_NAME(__scatter_elt64_half);
DECL_BUILTIN_NAME(__scatter_elt64_i16);
DECL_BUILTIN_NAME(__scatter_elt64_i32);
DECL_BUILTIN_NAME(__scatter_elt64_i64);
DECL_BUILTIN_NAME(__scatter_elt64_i8);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets32_double);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets32_float);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets32_half);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets32_i16);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets32_i32);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets32_i64);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets32_i8);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets64_double);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets64_float);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets64_half);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets64_i16);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets64_i32);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets64_i64);
DECL_BUILTIN_NAME(__scatter_factored_base_offsets64_i8);
DECL_BUILTIN_NAME(__set_ftz_daz_flags);
DECL_BUILTIN_NAME(__set_system_isa);
DECL_BUILTIN_NAME(__task_count);
DECL_BUILTIN_NAME(__task_count0);
DECL_BUILTIN_NAME(__task_count1);
DECL_BUILTIN_NAME(__task_count2);
DECL_BUILTIN_NAME(__task_index);
DECL_BUILTIN_NAME(__task_index0);
DECL_BUILTIN_NAME(__task_index1);
DECL_BUILTIN_NAME(__task_index2);
DECL_BUILTIN_NAME(__terminate_now);
DECL_BUILTIN_NAME(__wasm_cmp_msk_eq);

std::unordered_map<PersistentGroup, std::vector<const char *>> persistentGroups = {
    {
        PersistentGroup::GATHER_DOUBLE,
        {
            __pseudo_gather64_double,
            __pseudo_gather32_double,
            __pseudo_gather_base_offsets64_double,
            __pseudo_gather_factored_base_offsets64_double,
            __pseudo_gather_base_offsets32_double,
            __pseudo_gather_factored_base_offsets32_double,
            __masked_load_double,
            __masked_load_blend_double,
            __gather64_generic_double,
            __gather64_double,
            __gather32_generic_double,
            __gather32_double,
            __gather_base_offsets64_double,
            __gather_factored_base_offsets64_double,
            __gather_base_offsets32_double,
            __gather_factored_base_offsets32_double,
        },
    },
    {
        PersistentGroup::GATHER_FLOAT,
        {
            __pseudo_gather64_float,
            __pseudo_gather32_float,
            __pseudo_gather_base_offsets64_float,
            __pseudo_gather_factored_base_offsets64_float,
            __pseudo_gather_base_offsets32_float,
            __pseudo_gather_factored_base_offsets32_float,
            __masked_load_float,
            __masked_load_blend_float,
            __gather64_generic_float,
            __gather64_float,
            __gather32_generic_float,
            __gather32_float,
            __gather_base_offsets64_float,
            __gather_factored_base_offsets64_float,
            __gather_base_offsets32_float,
            __gather_factored_base_offsets32_float,
        },
    },
    {
        PersistentGroup::GATHER_HALF,
        {
            __pseudo_gather64_half,
            __pseudo_gather32_half,
            __pseudo_gather_base_offsets64_half,
            __pseudo_gather_factored_base_offsets64_half,
            __pseudo_gather_base_offsets32_half,
            __pseudo_gather_factored_base_offsets32_half,
            __masked_load_half,
            __masked_load_blend_half,
            __gather64_generic_half,
            __gather64_half,
            __gather32_generic_half,
            __gather32_half,
            __gather_base_offsets64_half,
            __gather_factored_base_offsets64_half,
            __gather_base_offsets32_half,
            __gather_factored_base_offsets32_half,
        },
    },
    {
        PersistentGroup::GATHER_I16,
        {
            __pseudo_gather64_i16,
            __pseudo_gather32_i16,
            __pseudo_gather_base_offsets64_i16,
            __pseudo_gather_factored_base_offsets64_i16,
            __pseudo_gather_base_offsets32_i16,
            __pseudo_gather_factored_base_offsets32_i16,
            __masked_load_i16,
            __masked_load_blend_i16,
            __gather64_generic_i16,
            __gather64_i16,
            __gather32_generic_i16,
            __gather32_i16,
            __gather_base_offsets64_i16,
            __gather_factored_base_offsets64_i16,
            __gather_base_offsets32_i16,
            __gather_factored_base_offsets32_i16,
        },
    },
    {
        PersistentGroup::GATHER_I32,
        {
            __pseudo_gather64_i32,
            __pseudo_gather32_i32,
            __pseudo_gather_base_offsets64_i32,
            __pseudo_gather_factored_base_offsets64_i32,
            __pseudo_gather_base_offsets32_i32,
            __pseudo_gather_factored_base_offsets32_i32,
            __masked_load_i32,
            __masked_load_blend_i32,
            __gather64_generic_i32,
            __gather64_i32,
            __gather32_generic_i32,
            __gather32_i32,
            __gather_base_offsets64_i32,
            __gather_factored_base_offsets64_i32,
            __gather_base_offsets32_i32,
            __gather_factored_base_offsets32_i32,
        },
    },
    {
        PersistentGroup::GATHER_I64,
        {
            __pseudo_gather64_i64,
            __pseudo_gather32_i64,
            __pseudo_gather_base_offsets64_i64,
            __pseudo_gather_factored_base_offsets64_i64,
            __pseudo_gather_base_offsets32_i64,
            __pseudo_gather_factored_base_offsets32_i64,
            __masked_load_i64,
            __masked_load_blend_i64,
            __gather64_generic_i64,
            __gather64_i64,
            __gather32_generic_i64,
            __gather32_i64,
            __gather_base_offsets64_i64,
            __gather_factored_base_offsets64_i64,
            __gather_base_offsets32_i64,
            __gather_factored_base_offsets32_i64,
        },
    },
    {
        PersistentGroup::GATHER_I8,
        {
            __pseudo_gather64_i8,
            __pseudo_gather32_i8,
            __pseudo_gather_base_offsets64_i8,
            __pseudo_gather_factored_base_offsets64_i8,
            __pseudo_gather_base_offsets32_i8,
            __pseudo_gather_factored_base_offsets32_i8,
            __masked_load_i8,
            __masked_load_blend_i8,
            __gather64_generic_i8,
            __gather64_i8,
            __gather32_generic_i8,
            __gather32_i8,
            __gather_base_offsets64_i8,
            __gather_factored_base_offsets64_i8,
            __gather_base_offsets32_i8,
            __gather_factored_base_offsets32_i8,
        },
    },
    {
        PersistentGroup::PREFETCH_READ,
        {
            __pseudo_prefetch_read_varying_1,
            __pseudo_prefetch_read_varying_1_native,
            __prefetch_read_varying_1,
            __prefetch_read_varying_1_native,
            __pseudo_prefetch_read_varying_2,
            __pseudo_prefetch_read_varying_2_native,
            __prefetch_read_varying_2,
            __prefetch_read_varying_2_native,
            __pseudo_prefetch_read_varying_3,
            __pseudo_prefetch_read_varying_3_native,
            __prefetch_read_varying_3,
            __prefetch_read_varying_3_native,
            __pseudo_prefetch_read_varying_nt,
            __pseudo_prefetch_read_varying_nt_native,
            __prefetch_read_varying_nt,
            __prefetch_read_varying_nt_native,
        },
    },
    {
        PersistentGroup::PREFETCH_WRITE,
        {
            __pseudo_prefetch_write_varying_1,
            __pseudo_prefetch_write_varying_1_native,
            __prefetch_write_varying_1,
            __prefetch_write_varying_1_native,
            __pseudo_prefetch_write_varying_2,
            __pseudo_prefetch_write_varying_2_native,
            __prefetch_write_varying_2,
            __prefetch_write_varying_2_native,
            __pseudo_prefetch_write_varying_3,
            __pseudo_prefetch_write_varying_3_native,
            __prefetch_write_varying_3,
            __prefetch_write_varying_3_native,
        },
    },
    {
        PersistentGroup::SCATTER_DOUBLE,
        {
            __pseudo_scatter64_double,
            __pseudo_scatter32_double,
            __pseudo_scatter_base_offsets64_double,
            __pseudo_scatter_factored_base_offsets64_double,
            __pseudo_scatter_base_offsets32_double,
            __pseudo_scatter_factored_base_offsets32_double,
            __pseudo_masked_store_double,
            __masked_store_blend_double,
            __masked_store_double,
            __scatter64_generic_double,
            __scatter64_double,
            __scatter32_generic_double,
            __scatter32_double,
            __scatter_base_offsets64_double,
            __scatter_factored_base_offsets64_double,
            __scatter_base_offsets32_double,
            __scatter_factored_base_offsets32_double,
        },
    },
    {
        PersistentGroup::SCATTER_FLOAT,
        {
            __pseudo_scatter64_float,
            __pseudo_scatter32_float,
            __pseudo_scatter_base_offsets64_float,
            __pseudo_scatter_factored_base_offsets64_float,
            __pseudo_scatter_base_offsets32_float,
            __pseudo_scatter_factored_base_offsets32_float,
            __pseudo_masked_store_float,
            __masked_store_blend_float,
            __masked_store_float,
            __scatter64_generic_float,
            __scatter64_float,
            __scatter32_generic_float,
            __scatter32_float,
            __scatter_base_offsets64_float,
            __scatter_factored_base_offsets64_float,
            __scatter_base_offsets32_float,
            __scatter_factored_base_offsets32_float,
        },
    },
    {
        PersistentGroup::SCATTER_HALF,
        {
            __pseudo_scatter64_half,
            __pseudo_scatter32_half,
            __pseudo_scatter_base_offsets64_half,
            __pseudo_scatter_factored_base_offsets64_half,
            __pseudo_scatter_base_offsets32_half,
            __pseudo_scatter_factored_base_offsets32_half,
            __pseudo_masked_store_half,
            __masked_store_blend_half,
            __masked_store_half,
            __scatter64_generic_half,
            __scatter64_half,
            __scatter32_generic_half,
            __scatter32_half,
            __scatter_base_offsets64_half,
            __scatter_factored_base_offsets64_half,
            __scatter_base_offsets32_half,
            __scatter_factored_base_offsets32_half,
        },
    },
    {
        PersistentGroup::SCATTER_I16,
        {
            __pseudo_scatter64_i16,
            __pseudo_scatter32_i16,
            __pseudo_scatter_base_offsets64_i16,
            __pseudo_scatter_factored_base_offsets64_i16,
            __pseudo_scatter_base_offsets32_i16,
            __pseudo_scatter_factored_base_offsets32_i16,
            __pseudo_masked_store_i16,
            __masked_store_blend_i16,
            __masked_store_i16,
            __scatter64_generic_i16,
            __scatter64_i16,
            __scatter32_generic_i16,
            __scatter32_i16,
            __scatter_base_offsets64_i16,
            __scatter_factored_base_offsets64_i16,
            __scatter_base_offsets32_i16,
            __scatter_factored_base_offsets32_i16,
        },
    },
    {
        PersistentGroup::SCATTER_I32,
        {
            __pseudo_scatter64_i32,
            __pseudo_scatter32_i32,
            __pseudo_scatter_base_offsets64_i32,
            __pseudo_scatter_factored_base_offsets64_i32,
            __pseudo_scatter_base_offsets32_i32,
            __pseudo_scatter_factored_base_offsets32_i32,
            __pseudo_masked_store_i32,
            __masked_store_blend_i32,
            __masked_store_i32,
            __scatter64_generic_i32,
            __scatter64_i32,
            __scatter32_generic_i32,
            __scatter32_i32,
            __scatter_base_offsets64_i32,
            __scatter_factored_base_offsets64_i32,
            __scatter_base_offsets32_i32,
            __scatter_factored_base_offsets32_i32,
        },
    },
    {
        PersistentGroup::SCATTER_I64,
        {
            __pseudo_scatter64_i64,
            __pseudo_scatter32_i64,
            __pseudo_scatter_base_offsets64_i64,
            __pseudo_scatter_factored_base_offsets64_i64,
            __pseudo_scatter_base_offsets32_i64,
            __pseudo_scatter_factored_base_offsets32_i64,
            __pseudo_masked_store_i64,
            __masked_store_blend_i64,
            __masked_store_i64,
            __scatter64_generic_i64,
            __scatter64_i64,
            __scatter32_generic_i64,
            __scatter32_i64,
            __scatter_base_offsets64_i64,
            __scatter_factored_base_offsets64_i64,
            __scatter_base_offsets32_i64,
            __scatter_factored_base_offsets32_i64,
        },
    },
    {
        PersistentGroup::SCATTER_I8,
        {
            __pseudo_scatter64_i8,
            __pseudo_scatter32_i8,
            __pseudo_scatter_base_offsets64_i8,
            __pseudo_scatter_factored_base_offsets64_i8,
            __pseudo_scatter_base_offsets32_i8,
            __pseudo_scatter_factored_base_offsets32_i8,
            __pseudo_masked_store_i8,
            __masked_store_blend_i8,
            __masked_store_i8,
            __scatter64_generic_i8,
            __scatter64_i8,
            __scatter32_generic_i8,
            __scatter32_i8,
            __scatter_base_offsets64_i8,
            __scatter_factored_base_offsets64_i8,
            __scatter_base_offsets32_i8,
            __scatter_factored_base_offsets32_i8,
        },
    },
};

std::unordered_map<std::string, int> persistentFuncs = {
    {__avg_up_uint8, 1},   {__avg_up_int8, 1},   {__avg_up_uint16, 1},   {__avg_up_int16, 1},
    {__avg_down_uint8, 1}, {__avg_down_int8, 1}, {__avg_down_uint16, 1}, {__avg_down_int16, 1},
};

} // namespace builtin

} // namespace ispc
