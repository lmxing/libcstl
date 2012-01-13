#ifndef _UT_CSTL_HASH_MULTIMAP_H_
#define _UT_CSTL_HASH_MULTIMAP_H_

UT_SUIT_DECLARATION(cstl_hash_multimap)
/*
 * test hash_multimap_init
 */
UT_CASE_DECLARATION(hash_multimap_init)
void test_hash_multimap_init__null_hash_multimap(void** state);
void test_hash_multimap_init__non_created(void** state);
void test_hash_multimap_init__non_created_pair(void** state);
void test_hash_multimap_init__null_compare(void** state);
/*
 * test hash_multimap_init_ex
 */
UT_CASE_DECLARATION(hash_multimap_init_ex)
void test_hash_multimap_init_ex__null_hash_multimap(void** state);
void test_hash_multimap_init_ex__non_created(void** state);
void test_hash_multimap_init_ex__non_created_pair(void** state);
void test_hash_multimap_init_ex__0_bucketcount(void** state);
void test_hash_multimap_init_ex__100_bucketcount(void** state);
void test_hash_multimap_init_ex__null_hash(void** state);
void test_hash_multimap_init_ex__non_null_hash(void** state);
void test_hash_multimap_init_ex__null_compare(void** state);
void test_hash_multimap_init_ex__non_null_compare(void** state);
/*
 * test hash_multimap_init_copy
 */
UT_CASE_DECLARATION(hash_multimap_init_copy)
void test_hash_multimap_init_copy__null_dest(void** state);
void test_hash_multimap_init_copy__null_src(void** state);
void test_hash_multimap_init_copy__non_created_dest(void** state);
void test_hash_multimap_init_copy__non_created_dest_pair(void** state);
void test_hash_multimap_init_copy__non_inited_src(void** state);
void test_hash_multimap_init_copy__non_inited_src_pair(void** state);
void test_hash_multimap_init_copy__not_same_type(void** state);
void test_hash_multimap_init_copy__empty(void** state);
void test_hash_multimap_init_copy__non_empty(void** state);
void test_hash_multimap_init_copy__bucketcount(void** state);
void test_hash_multimap_init_copy__non_null_hash(void** state);
void test_hash_multimap_init_copy__non_null_compare(void** state);
/*
 * test hash_multimap_init_copy_range
 */
UT_CASE_DECLARATION(hash_multimap_init_copy_range)
void test_hash_multimap_init_copy_range__null_hash_multimap(void** state);
void test_hash_multimap_init_copy_range__non_created_hash_multimap(void** state);
void test_hash_multimap_init_copy_range__non_created_hash_multimap_pair(void** state);
void test_hash_multimap_init_copy_range__invalid_begin(void** state);
void test_hash_multimap_init_copy_range__invalid_end(void** state);
void test_hash_multimap_init_copy_range__invalid_range(void** state);
void test_hash_multimap_init_copy_range__invalid_range_not_same_type(void** state);
void test_hash_multimap_init_copy_range__empty(void** state);
void test_hash_multimap_init_copy_range__non_empty(void** state);
void test_hash_multimap_init_copy_range__other(void** state);
void test_hash_multimap_init_copy_range__other_not_same(void** state);
/*
 * test hash_multimap_init_copy_range_ex
 */
UT_CASE_DECLARATION(hash_multimap_init_copy_range_ex)
void test_hash_multimap_init_copy_range_ex__null_hash_multimap(void** state);
void test_hash_multimap_init_copy_range_ex__non_created_hash_multimap(void** state);
void test_hash_multimap_init_copy_range_ex__non_created_hash_multimap_pair(void** state);
void test_hash_multimap_init_copy_range_ex__invalid_begin(void** state);
void test_hash_multimap_init_copy_range_ex__invalid_end(void** state);
void test_hash_multimap_init_copy_range_ex__invalid_range(void** state);
void test_hash_multimap_init_copy_range_ex__invalid_range_not_same_type(void** state);
void test_hash_multimap_init_copy_range_ex__empty(void** state);
void test_hash_multimap_init_copy_range_ex__non_empty(void** state);
void test_hash_multimap_init_copy_range_ex__bucketcount(void** state);
void test_hash_multimap_init_copy_range_ex__hash(void** state);
void test_hash_multimap_init_copy_range_ex__compare(void** state);
void test_hash_multimap_init_copy_range_ex__other(void** state);
void test_hash_multimap_init_copy_range_ex__other_not_same(void** state);
/*
 * test hash_multimap_destroy
 */
UT_CASE_DECLARATION(hash_multimap_destroy)
void test_hash_multimap_destroy__null_hash_multimap(void** state);
void test_hash_multimap_destroy__non_created(void** state);
void test_hash_multimap_destroy__created(void** state);
void test_hash_multimap_destroy__inited(void** state);
void test_hash_multimap_destroy__non_empty(void** state);
/*
 * test hash_multimap_assign
 */
UT_CASE_DECLARATION(hash_multimap_assign)
void test_hash_multimap_assign__null_dest(void** state);
void test_hash_multimap_assign__null_src(void** state);
void test_hash_multimap_assign__non_created_dest(void** state);
void test_hash_multimap_assign__non_created_dest_pair(void** state);
void test_hash_multimap_assign__non_init_src(void** state);
void test_hash_multimap_assign__non_init_src_pair(void** state);
void test_hash_multimap_assign__not_same_type(void** state);
void test_hash_multimap_assign__empty_empty(void** state);
void test_hash_multimap_assign__non_empty_empty(void** state);
void test_hash_multimap_assign__non_empty_non_empty_less(void** state);
void test_hash_multimap_assign__non_empty_non_empty_size_equal(void** state);
void test_hash_multimap_assign__non_empty_non_empty_equal(void** state);
void test_hash_multimap_assign__non_empty_non_empty_greater(void** state);
void test_hash_multimap_assign__empty_non_empty(void** state);
/*
 * test hash_multimap_size
 */
UT_CASE_DECLARATION(hash_multimap_size)
void test_hash_multimap_size__null_hash_multimap(void** state);
void test_hash_multimap_size__non_inited(void** state);
void test_hash_multimap_size__non_inited_pair(void** state);
void test_hash_multimap_size__empty(void** state);
void test_hash_multimap_size__non_empty(void** state);
/*
 * test _hash_multimap_emtpy
 */
UT_CASE_DECLARATION(hash_multimap_empty)
void test_hash_multimap_empty__null_hash_multimap(void** state);
void test_hash_multimap_empty__non_inited(void** state);
void test_hash_multimap_empty__non_inited_pair(void** state);
void test_hash_multimap_empty__empty(void** state);
void test_hash_multimap_empty__non_empty(void** state);
/*
 * test hash_multimap_max_size
 */
UT_CASE_DECLARATION(hash_multimap_max_size)
void test_hash_multimap_max_size__null_hash_multimap(void** state);
void test_hash_multimap_max_size__non_inited(void** state);
void test_hash_multimap_max_size__non_inited_pair(void** state);
void test_hash_multimap_max_size__empty(void** state);
void test_hash_multimap_max_size__non_empty(void** state);
/*
 * test hash_multimap_bucket_count
 */
UT_CASE_DECLARATION(hash_multimap_bucket_count)
void test_hash_multimap_bucket_count__null_hash_multimap(void** state);
void test_hash_multimap_bucket_count__non_inited(void** state);
void test_hash_multimap_bucket_count__non_inited_pair(void** state);
void test_hash_multimap_bucket_count__0(void** state);
void test_hash_multimap_bucket_count__100(void** state);
/*
 * test hash_multimap_begin
 */
UT_CASE_DECLARATION(hash_multimap_begin)
void test_hash_multimap_begin__null_hash_multimap(void** state);
void test_hash_multimap_begin__non_inited(void** state);
void test_hash_multimap_begin__non_inited_pair(void** state);
void test_hash_multimap_begin__empty(void** state);
void test_hash_multimap_begin__non_empty(void** state);
/*
 * test hash_multimap_end
 */
UT_CASE_DECLARATION(hash_multimap_end)
void test_hash_multimap_end__null_hash_multimap(void** state);
void test_hash_multimap_end__non_inited(void** state);
void test_hash_multimap_end__non_inited_pair(void** state);
void test_hash_multimap_end__empty(void** state);
void test_hash_multimap_end__non_empty(void** state);
/*
 * test hash_multimap_hash
 */
UT_CASE_DECLARATION(hash_multimap_hash)
void test_hash_multimap_hash__null_hash_multimap(void** state);
void test_hash_multimap_hash__non_inited(void** state);
void test_hash_multimap_hash__default_hash(void** state);
void test_hash_multimap_hash__user_define_hash(void** state);
/*
 * test hash_multimap_key_comp
 */
UT_CASE_DECLARATION(hash_multimap_key_comp)
void test_hash_multimap_key_comp__null_hash_multimap(void** state);
void test_hash_multimap_key_comp__non_inited(void** state);
void test_hash_multimap_key_comp__default_key_comp(void** state);
void test_hash_multimap_key_comp__user_define_key_comp(void** state);
/*
 * test hash_multimap_value_comp
 */
UT_CASE_DECLARATION(hash_multimap_value_comp)
void test_hash_multimap_value_comp__null_hash_multimap(void** state);
void test_hash_multimap_value_comp__non_inited(void** state);
void test_hash_multimap_value_comp__default_value_comp(void** state);
void test_hash_multimap_value_comp__user_define_value_comp(void** state);
/*
 * test hash_multimap_clear
 */
UT_CASE_DECLARATION(hash_multimap_clear)
void test_hash_multimap_clear__null_hash_multimap(void** state);
void test_hash_multimap_clear__non_inited(void** state);
void test_hash_multimap_clear__non_inited_pair(void** state);
void test_hash_multimap_clear__empty(void** state);
void test_hash_multimap_clear__non_empty(void** state);
/*
 * test hash_multimap_equal
 */
UT_CASE_DECLARATION(hash_multimap_equal)
void test_hash_multimap_equal__null_first(void** state);
void test_hash_multimap_equal__null_second(void** state);
void test_hash_multimap_equal__non_inited_first(void** state);
void test_hash_multimap_equal__non_inited_first_pair(void** state);
void test_hash_multimap_equal__non_inited_second(void** state);
void test_hash_multimap_equal__non_inited_second_pair(void** state);
void test_hash_multimap_equal__not_same_type(void** state);
void test_hash_multimap_equal__same_hash_multimap(void** state);
void test_hash_multimap_equal__size_first_less_than_second(void** state);
void test_hash_multimap_equal__size_first_greater_than_second(void** state);
void test_hash_multimap_equal__size_equal_0(void** state);
void test_hash_multimap_equal__size_equal_elem_first_less_than_second(void** state);
void test_hash_multimap_equal__size_equal_elem_first_greater_than_second(void** state);
void test_hash_multimap_equal__bucketcount_not_equal(void** state);
void test_hash_multimap_equal__hash_not_equal(void** state);
void test_hash_multimap_equal__compare_not_equal(void** state);
void test_hash_multimap_equal__equal(void** state);
/*
 * test hash_multimap_not_equal
 */
UT_CASE_DECLARATION(hash_multimap_not_equal)
void test_hash_multimap_not_equal__null_first(void** state);
void test_hash_multimap_not_equal__null_second(void** state);
void test_hash_multimap_not_equal__non_inited_first(void** state);
void test_hash_multimap_not_equal__non_inited_first_pair(void** state);
void test_hash_multimap_not_equal__non_inited_second(void** state);
void test_hash_multimap_not_equal__non_inited_second_pair(void** state);
void test_hash_multimap_not_equal__not_same_type(void** state);
void test_hash_multimap_not_equal__same_hash_multimap(void** state);
void test_hash_multimap_not_equal__size_first_less_than_second(void** state);
void test_hash_multimap_not_equal__size_first_greater_than_second(void** state);
void test_hash_multimap_not_equal__size_equal_0(void** state);
void test_hash_multimap_not_equal__size_equal_elem_first_less_than_second(void** state);
void test_hash_multimap_not_equal__size_equal_elem_first_greater_than_second(void** state);
void test_hash_multimap_not_equal__bucketcount_not_equal(void** state);
void test_hash_multimap_not_equal__hash_not_equal(void** state);
void test_hash_multimap_not_equal__compare_not_equal(void** state);
void test_hash_multimap_not_equal__equal(void** state);
/*
 * test hash_multimap_less
 */
UT_CASE_DECLARATION(hash_multimap_less)
void test_hash_multimap_less__null_first(void** state);
void test_hash_multimap_less__null_second(void** state);
void test_hash_multimap_less__non_inited_first(void** state);
void test_hash_multimap_less__non_inited_first_pair(void** state);
void test_hash_multimap_less__non_inited_second(void** state);
void test_hash_multimap_less__non_inited_second_pair(void** state);
void test_hash_multimap_less__not_same_type(void** state);
void test_hash_multimap_less__same_hash_multimap(void** state);
void test_hash_multimap_less__size_first_less_than_second(void** state);
void test_hash_multimap_less__size_first_greater_than_second(void** state);
void test_hash_multimap_less__size_equal_0(void** state);
void test_hash_multimap_less__size_equal_elem_first_less_than_second(void** state);
void test_hash_multimap_less__size_equal_elem_first_greater_than_second(void** state);
void test_hash_multimap_less__bucketcount_not_equal(void** state);
void test_hash_multimap_less__hash_not_equal(void** state);
void test_hash_multimap_less__compare_less(void** state);
void test_hash_multimap_less__equal(void** state);
/*
 * test hash_multimap_less_equal
 */
UT_CASE_DECLARATION(hash_multimap_less_equal)
void test_hash_multimap_less_equal__null_first(void** state);
void test_hash_multimap_less_equal__null_second(void** state);
void test_hash_multimap_less_equal__non_inited_first(void** state);
void test_hash_multimap_less_equal__non_inited_first_pair(void** state);
void test_hash_multimap_less_equal__non_inited_second(void** state);
void test_hash_multimap_less_equal__non_inited_second_pair(void** state);
void test_hash_multimap_less_equal__not_same_type(void** state);
void test_hash_multimap_less_equal__same_hash_multimap(void** state);
void test_hash_multimap_less_equal__size_first_less_than_second(void** state);
void test_hash_multimap_less_equal__size_first_greater_than_second(void** state);
void test_hash_multimap_less_equal__size_equal_0(void** state);
void test_hash_multimap_less_equal__size_equal_elem_first_less_than_second(void** state);
void test_hash_multimap_less_equal__size_equal_elem_first_greater_than_second(void** state);
void test_hash_multimap_less_equal__bucketcount_not_equal(void** state);
void test_hash_multimap_less_equal__hash_not_equal(void** state);
void test_hash_multimap_less_equal__compare_less(void** state);
void test_hash_multimap_less_equal__equal(void** state);
/*
 * test hash_multimap_greater
 */
UT_CASE_DECLARATION(hash_multimap_greater)
void test_hash_multimap_greater__null_first(void** state);
void test_hash_multimap_greater__null_second(void** state);
void test_hash_multimap_greater__non_inited_first(void** state);
void test_hash_multimap_greater__non_inited_first_pair(void** state);
void test_hash_multimap_greater__non_inited_second(void** state);
void test_hash_multimap_greater__non_inited_second_pair(void** state);
void test_hash_multimap_greater__not_same_type(void** state);
void test_hash_multimap_greater__same_hash_multimap(void** state);
void test_hash_multimap_greater__size_first_less_than_second(void** state);
void test_hash_multimap_greater__size_first_greater_than_second(void** state);
void test_hash_multimap_greater__size_equal_0(void** state);
void test_hash_multimap_greater__size_equal_elem_first_less_than_second(void** state);
void test_hash_multimap_greater__size_equal_elem_first_greater_than_second(void** state);
void test_hash_multimap_greater__bucketcount_not_equal(void** state);
void test_hash_multimap_greater__hash_not_equal(void** state);
void test_hash_multimap_greater__compare_less(void** state);
void test_hash_multimap_greater__equal(void** state);
/*
 * test hash_multimap_greater_equal
 */
UT_CASE_DECLARATION(hash_multimap_greater_equal)
void test_hash_multimap_greater_equal__null_first(void** state);
void test_hash_multimap_greater_equal__null_second(void** state);
void test_hash_multimap_greater_equal__non_inited_first(void** state);
void test_hash_multimap_greater_equal__non_inited_first_pair(void** state);
void test_hash_multimap_greater_equal__non_inited_second(void** state);
void test_hash_multimap_greater_equal__non_inited_second_pair(void** state);
void test_hash_multimap_greater_equal__not_same_type(void** state);
void test_hash_multimap_greater_equal__same_hash_multimap(void** state);
void test_hash_multimap_greater_equal__size_first_less_than_second(void** state);
void test_hash_multimap_greater_equal__size_first_greater_than_second(void** state);
void test_hash_multimap_greater_equal__size_equal_0(void** state);
void test_hash_multimap_greater_equal__size_equal_elem_first_less_than_second(void** state);
void test_hash_multimap_greater_equal__size_equal_elem_first_greater_than_second(void** state);
void test_hash_multimap_greater_equal__bucketcount_not_equal(void** state);
void test_hash_multimap_greater_equal__hash_not_equal(void** state);
void test_hash_multimap_greater_equal__compare_less(void** state);
void test_hash_multimap_greater_equal__equal(void** state);
/*
 * test hash_multimap_swap
 */
UT_CASE_DECLARATION(hash_multimap_swap)
void test_hash_multimap_swap__null_first(void** state);
void test_hash_multimap_swap__null_second(void** state);
void test_hash_multimap_swap__non_inited_first(void** state);
void test_hash_multimap_swap__non_inited_first_pair(void** state);
void test_hash_multimap_swap__non_inited_second(void** state);
void test_hash_multimap_swap__non_inited_second_pair(void** state);
void test_hash_multimap_swap__not_same_type(void** state);
void test_hash_multimap_swap__same_hash_multimap(void** state);
void test_hash_multimap_swap__0_swap_n(void** state);
void test_hash_multimap_swap__n_swap_0(void** state);
void test_hash_multimap_swap__n_swap_n(void** state);
void test_hash_multimap_swap__m_swap_n(void** state);
/*
 * test hash_multimap_insert
 */
UT_CASE_DECLARATION(hash_multimap_insert)
void test_hash_multimap_insert__null_hash_multimap(void** state);
void test_hash_multimap_insert__null_pair(void** state);
void test_hash_multimap_insert__non_inited(void** state);
void test_hash_multimap_insert__non_inited_pair(void** state);
void test_hash_multimap_insert__pair_non_inited(void** state);
void test_hash_multimap_insert__not_smae_type(void** state);
void test_hash_multimap_insert__c_builtin_equal(void** state);
void test_hash_multimap_insert__c_builtin_not_equal(void** state);
void test_hash_multimap_insert__cstr_equal(void** state);
void test_hash_multimap_insert__cstr_not_equal(void** state);
void test_hash_multimap_insert__libcstl_builtin_equal(void** state);
void test_hash_multimap_insert__libcstl_builtin_not_equal(void** state);
void test_hash_multimap_insert__user_define_equal(void** state);
void test_hash_multimap_insert__user_define_not_equal(void** state);
/*
 * test hash_multimap_insert_range
 */
UT_CASE_DECLARATION(hash_multimap_insert_range)
void test_hash_multimap_insert_range__null_hash_multimap(void** state);
void test_hash_multimap_insert_range__non_inited(void** state);
void test_hash_multimap_insert_range__non_inited_pair(void** state);
void test_hash_multimap_insert_range__invalid_begin(void** state);
void test_hash_multimap_insert_range__invalid_end(void** state);
void test_hash_multimap_insert_range__invalid_range(void** state);
void test_hash_multimap_insert_range__not_same_type(void** state);
void test_hash_multimap_insert_range__empty(void** state);
void test_hash_multimap_insert_range__non_empty_equal(void** state);
void test_hash_multimap_insert_range__non_empty_dest_src_dup(void** state);
void test_hash_multimap_insert_range__non_empty_src_dup(void** state);
void test_hash_multimap_insert_range__compare(void** state);
void test_hash_multimap_insert_range__other(void** state);
void test_hash_multimap_insert_range__other_not_same(void** state);
/*
 * test hash_multimap_erase_pos
 */
UT_CASE_DECLARATION(hash_multimap_erase_pos)
void test_hash_multimap_erase_pos__null_hash_multimap(void** state);
void test_hash_multimap_erase_pos__non_inited(void** state);
void test_hash_multimap_erase_pos__non_inited_pair(void** state);
void test_hash_multimap_erase_pos__invalid_pos(void** state);
void test_hash_multimap_erase_pos__end(void** state);
void test_hash_multimap_erase_pos__begin(void** state);
void test_hash_multimap_erase_pos__middle(void** state);
void test_hash_multimap_erase_pos__last(void** state);
void test_hash_multimap_erase_pos__erase_empty(void** state);
/*
 * test hash_multimap_erase_range
 */
UT_CASE_DECLARATION(hash_multimap_erase_range)
void test_hash_multimap_erase_range__null_hash_multimap(void** state);
void test_hash_multimap_erase_range__non_inited(void** state);
void test_hash_multimap_erase_range__non_inited_pair(void** state);
void test_hash_multimap_erase_range__invalid_begin(void** state);
void test_hash_multimap_erase_range__invalid_end(void** state);
void test_hash_multimap_erase_range__invalid_range(void** state);
void test_hash_multimap_erase_range__empty(void** state);
void test_hash_multimap_erase_range__begin(void** state);
void test_hash_multimap_erase_range__middle(void** state);
void test_hash_multimap_erase_range__end(void** state);
void test_hash_multimap_erase_range__all(void** state);
/*
 * test hash_multimap_resize
 */
UT_CASE_DECLARATION(hash_multimap_resize)
void test_hash_multimap_resize__null_hash_multimap(void** state);
void test_hash_multimap_resize__non_inited(void** state);
void test_hash_multimap_resize__non_inited_pair(void** state);
void test_hash_multimap_resize__resize(void** state);

#define UT_CSTL_HASH_MULTIMAP_CASE\
    UT_SUIT_BEGIN(cstl_hash_multimap, test_hash_multimap_init__null_hash_multimap),\
    UT_CASE(test_hash_multimap_init__non_created),\
    UT_CASE(test_hash_multimap_init__non_created),\
    UT_CASE(test_hash_multimap_init__null_compare),\
    UT_CASE_BEGIN(hash_multimap_init_ex,  test_hash_multimap_init_ex__null_hash_multimap),\
    UT_CASE(test_hash_multimap_init_ex__non_created),\
    UT_CASE(test_hash_multimap_init_ex__non_created_pair),\
    UT_CASE(test_hash_multimap_init_ex__0_bucketcount),\
    UT_CASE(test_hash_multimap_init_ex__100_bucketcount),\
    UT_CASE(test_hash_multimap_init_ex__null_hash),\
    UT_CASE(test_hash_multimap_init_ex__non_null_hash),\
    UT_CASE(test_hash_multimap_init_ex__null_compare),\
    UT_CASE(test_hash_multimap_init_ex__non_null_compare),\
    UT_CASE_BEGIN(hash_multimap_init_copy, test_hash_multimap_init_copy__null_dest),\
    UT_CASE(test_hash_multimap_init_copy__null_src),\
    UT_CASE(test_hash_multimap_init_copy__non_created_dest),\
    UT_CASE(test_hash_multimap_init_copy__non_created_dest_pair),\
    UT_CASE(test_hash_multimap_init_copy__non_inited_src),\
    UT_CASE(test_hash_multimap_init_copy__non_inited_src_pair),\
    UT_CASE(test_hash_multimap_init_copy__not_same_type),\
    UT_CASE(test_hash_multimap_init_copy__empty),\
    UT_CASE(test_hash_multimap_init_copy__non_empty),\
    UT_CASE(test_hash_multimap_init_copy__bucketcount),\
    UT_CASE(test_hash_multimap_init_copy__non_null_hash),\
    UT_CASE(test_hash_multimap_init_copy__non_null_compare),\
    UT_CASE_BEGIN(hash_multimap_init_copy_range, test_hash_multimap_init_copy_range__null_hash_multimap),\
    UT_CASE(test_hash_multimap_init_copy_range__non_created_hash_multimap),\
    UT_CASE(test_hash_multimap_init_copy_range__non_created_hash_multimap_pair),\
    UT_CASE(test_hash_multimap_init_copy_range__invalid_begin),\
    UT_CASE(test_hash_multimap_init_copy_range__invalid_end),\
    UT_CASE(test_hash_multimap_init_copy_range__invalid_range),\
    UT_CASE(test_hash_multimap_init_copy_range__invalid_range_not_same_type),\
    UT_CASE(test_hash_multimap_init_copy_range__empty),\
    UT_CASE(test_hash_multimap_init_copy_range__non_empty),\
    UT_CASE(test_hash_multimap_init_copy_range__other),\
    UT_CASE(test_hash_multimap_init_copy_range__other_not_same),\
    UT_CASE_BEGIN(hash_multimap_init_copy_range_ex, test_hash_multimap_init_copy_range_ex__null_hash_multimap),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__non_created_hash_multimap),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__non_created_hash_multimap_pair),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__invalid_begin),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__invalid_end),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__invalid_range),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__invalid_range_not_same_type),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__empty),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__non_empty),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__bucketcount),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__hash),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__compare),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__other),\
    UT_CASE(test_hash_multimap_init_copy_range_ex__other_not_same),\
    UT_CASE_BEGIN(hash_multimap_destroy, test_hash_multimap_destroy__null_hash_multimap),\
    UT_CASE(test_hash_multimap_destroy__non_created),\
    UT_CASE(test_hash_multimap_destroy__created),\
    UT_CASE(test_hash_multimap_destroy__inited),\
    UT_CASE(test_hash_multimap_destroy__non_empty),\
    UT_CASE_BEGIN(hash_multimap_assign, test_hash_multimap_assign__null_dest),\
    UT_CASE(test_hash_multimap_assign__null_src),\
    UT_CASE(test_hash_multimap_assign__non_created_dest),\
    UT_CASE(test_hash_multimap_assign__non_created_dest_pair),\
    UT_CASE(test_hash_multimap_assign__non_init_src),\
    UT_CASE(test_hash_multimap_assign__non_init_src_pair),\
    UT_CASE(test_hash_multimap_assign__not_same_type),\
    UT_CASE(test_hash_multimap_assign__empty_empty),\
    UT_CASE(test_hash_multimap_assign__non_empty_empty),\
    UT_CASE(test_hash_multimap_assign__non_empty_non_empty_less),\
    UT_CASE(test_hash_multimap_assign__non_empty_non_empty_size_equal),\
    UT_CASE(test_hash_multimap_assign__non_empty_non_empty_equal),\
    UT_CASE(test_hash_multimap_assign__non_empty_non_empty_greater),\
    UT_CASE(test_hash_multimap_assign__empty_non_empty),\
    UT_CASE_BEGIN(hash_multimap_size, test_hash_multimap_size__null_hash_multimap),\
    UT_CASE(test_hash_multimap_size__non_inited),\
    UT_CASE(test_hash_multimap_size__non_inited_pair),\
    UT_CASE(test_hash_multimap_size__empty),\
    UT_CASE(test_hash_multimap_size__non_empty),\
    UT_CASE_BEGIN(hash_multimap_empty, test_hash_multimap_empty__null_hash_multimap),\
    UT_CASE(test_hash_multimap_empty__non_inited),\
    UT_CASE(test_hash_multimap_empty__non_inited_pair),\
    UT_CASE(test_hash_multimap_empty__empty),\
    UT_CASE(test_hash_multimap_empty__non_empty),\
    UT_CASE_BEGIN(hash_multimap_max_size, test_hash_multimap_max_size__null_hash_multimap),\
    UT_CASE(test_hash_multimap_max_size__non_inited),\
    UT_CASE(test_hash_multimap_max_size__non_inited_pair),\
    UT_CASE(test_hash_multimap_max_size__empty),\
    UT_CASE(test_hash_multimap_max_size__non_empty),\
    UT_CASE_BEGIN(hash_multimap_bucket_count, test_hash_multimap_bucket_count__null_hash_multimap),\
    UT_CASE(test_hash_multimap_bucket_count__non_inited),\
    UT_CASE(test_hash_multimap_bucket_count__non_inited_pair),\
    UT_CASE(test_hash_multimap_bucket_count__0),\
    UT_CASE(test_hash_multimap_bucket_count__100),\
    UT_CASE_BEGIN(hash_multimap_begin, test_hash_multimap_begin__null_hash_multimap),\
    UT_CASE(test_hash_multimap_begin__non_inited),\
    UT_CASE(test_hash_multimap_begin__non_inited_pair),\
    UT_CASE(test_hash_multimap_begin__empty),\
    UT_CASE(test_hash_multimap_begin__non_empty),\
    UT_CASE_BEGIN(hash_multimap_end, test_hash_multimap_end__null_hash_multimap),\
    UT_CASE(test_hash_multimap_end__non_inited),\
    UT_CASE(test_hash_multimap_end__non_inited_pair),\
    UT_CASE(test_hash_multimap_end__empty),\
    UT_CASE(test_hash_multimap_end__non_empty),\
    UT_CASE_BEGIN(hash_multimap_hash, test_hash_multimap_hash__null_hash_multimap),\
    UT_CASE(test_hash_multimap_hash__non_inited),\
    UT_CASE(test_hash_multimap_hash__default_hash),\
    UT_CASE(test_hash_multimap_hash__user_define_hash),\
    UT_CASE(test_hash_multimap_hash__null_hash_multimap),\
    UT_CASE_BEGIN(hash_multimap_key_comp, test_hash_multimap_key_comp__null_hash_multimap),\
    UT_CASE(test_hash_multimap_key_comp__non_inited),\
    UT_CASE(test_hash_multimap_key_comp__default_key_comp),\
    UT_CASE(test_hash_multimap_key_comp__user_define_key_comp),\
    UT_CASE_BEGIN(hash_multimap_value_comp, test_hash_multimap_value_comp__null_hash_multimap),\
    UT_CASE(test_hash_multimap_value_comp__non_inited),\
    UT_CASE(test_hash_multimap_value_comp__default_value_comp),\
    UT_CASE(test_hash_multimap_value_comp__user_define_value_comp),\
    UT_CASE_BEGIN(hash_multimap_clear, test_hash_multimap_clear__null_hash_multimap),\
    UT_CASE(test_hash_multimap_clear__non_inited),\
    UT_CASE(test_hash_multimap_clear__non_inited_pair),\
    UT_CASE(test_hash_multimap_clear__empty),\
    UT_CASE(test_hash_multimap_clear__non_empty),\
    UT_CASE_BEGIN(hash_multimap_equal, test_hash_multimap_equal__null_first),\
    UT_CASE(test_hash_multimap_equal__null_second),\
    UT_CASE(test_hash_multimap_equal__non_inited_first),\
    UT_CASE(test_hash_multimap_equal__non_inited_first_pair),\
    UT_CASE(test_hash_multimap_equal__non_inited_second),\
    UT_CASE(test_hash_multimap_equal__non_inited_second_pair),\
    UT_CASE(test_hash_multimap_equal__not_same_type),\
    UT_CASE(test_hash_multimap_equal__same_hash_multimap),\
    UT_CASE(test_hash_multimap_equal__size_first_less_than_second),\
    UT_CASE(test_hash_multimap_equal__size_first_greater_than_second),\
    UT_CASE(test_hash_multimap_equal__size_equal_0),\
    UT_CASE(test_hash_multimap_equal__size_equal_elem_first_less_than_second),\
    UT_CASE(test_hash_multimap_equal__size_equal_elem_first_greater_than_second),\
    UT_CASE(test_hash_multimap_equal__bucketcount_not_equal),\
    UT_CASE(test_hash_multimap_equal__hash_not_equal),\
    UT_CASE(test_hash_multimap_equal__compare_not_equal),\
    UT_CASE(test_hash_multimap_equal__equal),\
    UT_CASE_BEGIN(hash_multimap_not_equal, test_hash_multimap_not_equal__null_first),\
    UT_CASE(test_hash_multimap_not_equal__null_second),\
    UT_CASE(test_hash_multimap_not_equal__non_inited_first),\
    UT_CASE(test_hash_multimap_not_equal__non_inited_first_pair),\
    UT_CASE(test_hash_multimap_not_equal__non_inited_second),\
    UT_CASE(test_hash_multimap_not_equal__non_inited_second_pair),\
    UT_CASE(test_hash_multimap_not_equal__not_same_type),\
    UT_CASE(test_hash_multimap_not_equal__same_hash_multimap),\
    UT_CASE(test_hash_multimap_not_equal__size_first_less_than_second),\
    UT_CASE(test_hash_multimap_not_equal__size_first_greater_than_second),\
    UT_CASE(test_hash_multimap_not_equal__size_equal_0),\
    UT_CASE(test_hash_multimap_not_equal__size_equal_elem_first_less_than_second),\
    UT_CASE(test_hash_multimap_not_equal__size_equal_elem_first_greater_than_second),\
    UT_CASE(test_hash_multimap_not_equal__bucketcount_not_equal),\
    UT_CASE(test_hash_multimap_not_equal__hash_not_equal),\
    UT_CASE(test_hash_multimap_not_equal__compare_not_equal),\
    UT_CASE(test_hash_multimap_not_equal__equal),\
    UT_CASE_BEGIN(hash_multimap_less, test_hash_multimap_less__null_first),\
    UT_CASE(test_hash_multimap_less__null_second),\
    UT_CASE(test_hash_multimap_less__non_inited_first),\
    UT_CASE(test_hash_multimap_less__non_inited_first_pair),\
    UT_CASE(test_hash_multimap_less__non_inited_second),\
    UT_CASE(test_hash_multimap_less__non_inited_second_pair),\
    UT_CASE(test_hash_multimap_less__not_same_type),\
    UT_CASE(test_hash_multimap_less__same_hash_multimap),\
    UT_CASE(test_hash_multimap_less__size_first_less_than_second),\
    UT_CASE(test_hash_multimap_less__size_first_greater_than_second),\
    UT_CASE(test_hash_multimap_less__size_equal_0),\
    UT_CASE(test_hash_multimap_less__size_equal_elem_first_less_than_second),\
    UT_CASE(test_hash_multimap_less__size_equal_elem_first_greater_than_second),\
    UT_CASE(test_hash_multimap_less__bucketcount_not_equal),\
    UT_CASE(test_hash_multimap_less__hash_not_equal),\
    UT_CASE(test_hash_multimap_less__compare_less),\
    UT_CASE(test_hash_multimap_less__equal),\
    UT_CASE_BEGIN(hash_multimap_less_equal, test_hash_multimap_less_equal__null_first),\
    UT_CASE(test_hash_multimap_less_equal__null_second),\
    UT_CASE(test_hash_multimap_less_equal__non_inited_first),\
    UT_CASE(test_hash_multimap_less_equal__non_inited_first_pair),\
    UT_CASE(test_hash_multimap_less_equal__non_inited_second),\
    UT_CASE(test_hash_multimap_less_equal__non_inited_second_pair),\
    UT_CASE(test_hash_multimap_less_equal__not_same_type),\
    UT_CASE(test_hash_multimap_less_equal__same_hash_multimap),\
    UT_CASE(test_hash_multimap_less_equal__size_first_less_than_second),\
    UT_CASE(test_hash_multimap_less_equal__size_first_greater_than_second),\
    UT_CASE(test_hash_multimap_less_equal__size_equal_0),\
    UT_CASE(test_hash_multimap_less_equal__size_equal_elem_first_less_than_second),\
    UT_CASE(test_hash_multimap_less_equal__size_equal_elem_first_greater_than_second),\
    UT_CASE(test_hash_multimap_less_equal__bucketcount_not_equal),\
    UT_CASE(test_hash_multimap_less_equal__hash_not_equal),\
    UT_CASE(test_hash_multimap_less_equal__compare_less),\
    UT_CASE(test_hash_multimap_less_equal__equal),\
    UT_CASE_BEGIN(hash_multimap_greater, test_hash_multimap_greater__null_first),\
    UT_CASE(test_hash_multimap_greater__null_second),\
    UT_CASE(test_hash_multimap_greater__non_inited_first),\
    UT_CASE(test_hash_multimap_greater__non_inited_first_pair),\
    UT_CASE(test_hash_multimap_greater__non_inited_second),\
    UT_CASE(test_hash_multimap_greater__non_inited_second_pair),\
    UT_CASE(test_hash_multimap_greater__not_same_type),\
    UT_CASE(test_hash_multimap_greater__same_hash_multimap),\
    UT_CASE(test_hash_multimap_greater__size_first_less_than_second),\
    UT_CASE(test_hash_multimap_greater__size_first_greater_than_second),\
    UT_CASE(test_hash_multimap_greater__size_equal_0),\
    UT_CASE(test_hash_multimap_greater__size_equal_elem_first_less_than_second),\
    UT_CASE(test_hash_multimap_greater__size_equal_elem_first_greater_than_second),\
    UT_CASE(test_hash_multimap_greater__bucketcount_not_equal),\
    UT_CASE(test_hash_multimap_greater__hash_not_equal),\
    UT_CASE(test_hash_multimap_greater__compare_less),\
    UT_CASE(test_hash_multimap_greater__equal),\
    UT_CASE_BEGIN(hash_multimap_greater_equal, test_hash_multimap_greater_equal__null_first),\
    UT_CASE(test_hash_multimap_greater_equal__null_second),\
    UT_CASE(test_hash_multimap_greater_equal__non_inited_first),\
    UT_CASE(test_hash_multimap_greater_equal__non_inited_first_pair),\
    UT_CASE(test_hash_multimap_greater_equal__non_inited_second),\
    UT_CASE(test_hash_multimap_greater_equal__non_inited_second_pair),\
    UT_CASE(test_hash_multimap_greater_equal__not_same_type),\
    UT_CASE(test_hash_multimap_greater_equal__same_hash_multimap),\
    UT_CASE(test_hash_multimap_greater_equal__size_first_less_than_second),\
    UT_CASE(test_hash_multimap_greater_equal__size_first_greater_than_second),\
    UT_CASE(test_hash_multimap_greater_equal__size_equal_0),\
    UT_CASE(test_hash_multimap_greater_equal__size_equal_elem_first_less_than_second),\
    UT_CASE(test_hash_multimap_greater_equal__size_equal_elem_first_greater_than_second),\
    UT_CASE(test_hash_multimap_greater_equal__bucketcount_not_equal),\
    UT_CASE(test_hash_multimap_greater_equal__hash_not_equal),\
    UT_CASE(test_hash_multimap_greater_equal__compare_less),\
    UT_CASE(test_hash_multimap_greater_equal__equal),\
    UT_CASE_BEGIN(hash_multimap_swap, test_hash_multimap_swap__null_first),\
    UT_CASE(test_hash_multimap_swap__null_second),\
    UT_CASE(test_hash_multimap_swap__non_inited_first),\
    UT_CASE(test_hash_multimap_swap__non_inited_first_pair),\
    UT_CASE(test_hash_multimap_swap__non_inited_second),\
    UT_CASE(test_hash_multimap_swap__non_inited_second_pair),\
    UT_CASE(test_hash_multimap_swap__not_same_type),\
    UT_CASE(test_hash_multimap_swap__same_hash_multimap),\
    UT_CASE(test_hash_multimap_swap__0_swap_n),\
    UT_CASE(test_hash_multimap_swap__n_swap_0),\
    UT_CASE(test_hash_multimap_swap__n_swap_n),\
    UT_CASE(test_hash_multimap_swap__m_swap_n),\
    UT_CASE_BEGIN(hash_multimap_insert, test_hash_multimap_insert__null_hash_multimap),\
    UT_CASE(test_hash_multimap_insert__null_pair),\
    UT_CASE(test_hash_multimap_insert__non_inited),\
    UT_CASE(test_hash_multimap_insert__non_inited_pair),\
    UT_CASE(test_hash_multimap_insert__pair_non_inited),\
    UT_CASE(test_hash_multimap_insert__not_smae_type),\
    UT_CASE(test_hash_multimap_insert__c_builtin_equal),\
    UT_CASE(test_hash_multimap_insert__c_builtin_not_equal),\
    UT_CASE(test_hash_multimap_insert__cstr_equal),\
    UT_CASE(test_hash_multimap_insert__cstr_not_equal),\
    UT_CASE(test_hash_multimap_insert__libcstl_builtin_equal),\
    UT_CASE(test_hash_multimap_insert__libcstl_builtin_not_equal),\
    UT_CASE(test_hash_multimap_insert__user_define_equal),\
    UT_CASE(test_hash_multimap_insert__user_define_not_equal),\
    UT_CASE_BEGIN(hash_multimap_insert_range, test_hash_multimap_insert_range__null_hash_multimap),\
    UT_CASE(test_hash_multimap_insert_range__non_inited),\
    UT_CASE(test_hash_multimap_insert_range__non_inited_pair),\
    UT_CASE(test_hash_multimap_insert_range__invalid_begin),\
    UT_CASE(test_hash_multimap_insert_range__invalid_end),\
    UT_CASE(test_hash_multimap_insert_range__invalid_range),\
    UT_CASE(test_hash_multimap_insert_range__not_same_type),\
    UT_CASE(test_hash_multimap_insert_range__empty),\
    UT_CASE(test_hash_multimap_insert_range__non_empty_equal),\
    UT_CASE(test_hash_multimap_insert_range__non_empty_dest_src_dup),\
    UT_CASE(test_hash_multimap_insert_range__non_empty_src_dup),\
    UT_CASE(test_hash_multimap_insert_range__compare),\
    UT_CASE(test_hash_multimap_insert_range__other),\
    UT_CASE(test_hash_multimap_insert_range__other_not_same),\
    UT_CASE_BEGIN(hash_multimap_erase_pos, test_hash_multimap_erase_pos__null_hash_multimap),\
    UT_CASE(test_hash_multimap_erase_pos__non_inited),\
    UT_CASE(test_hash_multimap_erase_pos__non_inited_pair),\
    UT_CASE(test_hash_multimap_erase_pos__invalid_pos),\
    UT_CASE(test_hash_multimap_erase_pos__end),\
    UT_CASE(test_hash_multimap_erase_pos__begin),\
    UT_CASE(test_hash_multimap_erase_pos__middle),\
    UT_CASE(test_hash_multimap_erase_pos__last),\
    UT_CASE(test_hash_multimap_erase_pos__erase_empty),\
    UT_CASE_BEGIN(hash_multimap_erase_range, test_hash_multimap_erase_range__null_hash_multimap),\
    UT_CASE(test_hash_multimap_erase_range__non_inited),\
    UT_CASE(test_hash_multimap_erase_range__non_inited_pair),\
    UT_CASE(test_hash_multimap_erase_range__invalid_begin),\
    UT_CASE(test_hash_multimap_erase_range__invalid_end),\
    UT_CASE(test_hash_multimap_erase_range__invalid_range),\
    UT_CASE(test_hash_multimap_erase_range__empty),\
    UT_CASE(test_hash_multimap_erase_range__begin),\
    UT_CASE(test_hash_multimap_erase_range__middle),\
    UT_CASE(test_hash_multimap_erase_range__end),\
    UT_CASE(test_hash_multimap_erase_range__all),\
    UT_CASE_BEGIN(hash_multimap_resize, test_hash_multimap_resize__null_hash_multimap),\
    UT_CASE(test_hash_multimap_resize__non_inited),\
    UT_CASE(test_hash_multimap_resize__non_inited_pair),\
    UT_CASE(test_hash_multimap_resize__resize)

#endif /* _UT_CSTL_HASH_MULTIMAP_H_ */

