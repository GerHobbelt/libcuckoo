#pragma once

void test_bucket_container_default_constructor();
void test_bucket_container_simple_stateful_allocator();
void test_bucket_container_copy_construction();
void test_bucket_container_move_construction();
void test_bucket_container_copy_assignment_with_propagate();
void test_bucket_container_copy_assignment_no_propagate();
void test_bucket_container_move_assignment_with_propagate();
void test_bucket_container_move_assignment_no_propagate_equal();
void test_bucket_container_move_assignment_no_propagate_unequal();
void test_bucket_container_swap_no_propagate();
void test_bucket_container_swap_propagate();
void test_bucket_container_setKV_with_throwing_type_maintains_strong_guarantee();
void test_bucket_container_copy_assignment_with_throwing_type_is_destroyed_properly();
void test_bucket_container_copy_destroyed_buckets_container();