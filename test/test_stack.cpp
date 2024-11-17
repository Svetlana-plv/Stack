#include "stack.h"
#include <gtest.h>

TEST(TStack, can_create_defolt_stack) {

	ASSERT_NO_THROW(TStack<int> stack);
}

TEST(TStack, can_create_stack_with_positive_lenght) {

	ASSERT_NO_THROW(TStack<int> stack(5));
}

TEST(TStack, can_create_stack_with_negative_lenght) {

	ASSERT_ANY_THROW(TStack<int> stack(-5));
}

TEST(TStack, can_get_size_from_empty_stack) {

	TStack<int> stack(5);

	EXPECT_EQ(0, stack.Size());
}

TEST(TStack, can_get_size) {

	TStack<int> stack(5);
	stack.Push(7);

	EXPECT_EQ(1, stack.Size());
}

TEST(TStack, can_get_top_element) {

	TStack<int> stack(5);
	stack.Push(5);
	stack.Push(7);

	ASSERT_NO_THROW(stack.Top());
}

TEST(TStack, top_element_correct) {

	TStack<int> stack(5);
	stack.Push(5);
	stack.Push(7);

	EXPECT_EQ(7, stack.Top());
}

TEST(TStack, cant_top_element_from_empty_stack) {

	TStack<int> stack(5);

	ASSERT_ANY_THROW(stack.Top());
}

TEST(TStack, can_pop_element) {

	TStack<int> stack(5);
	stack.Push(5);
	stack.Push(7);

	ASSERT_NO_THROW(stack.Pop());
}

TEST(TStack, cant_pop_element_from_empty_stack) {

	TStack<int> stack(5);

	ASSERT_ANY_THROW(stack.Pop());
}

TEST(TStack, can_push_element) {

	TStack<int> stack(5);

	ASSERT_NO_THROW(stack.Push(7));
}

TEST(TStack, can_check_empty_stack) {

	TStack<int> stack(5);

	ASSERT_NO_THROW(stack.Empty());
}

TEST(TStack, stack_is_empty) {

	TStack<int> stack(5);

	EXPECT_TRUE(stack.Empty());
}

TEST(TStack, can_clear_stack) {

	TStack<int> stack(5);
	stack.Push(5);
	stack.Push(7);

	ASSERT_NO_THROW(stack.Clear());
}

TEST(TStack, cleared_stack_is_empty) {

	TStack<int> stack(5);
	stack.Push(5);
	stack.Push(7);

	stack.Clear();

	EXPECT_TRUE(stack.Empty());
}
