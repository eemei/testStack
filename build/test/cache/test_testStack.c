#include "testStack.h"
#include "unity.h"


void setUp(void){}



void tearDown(void){}















void test_stackCreate_should_return_non_NULL_Stack_with_all_field(){

  Stack *stack = stackCreate ();

  if ((((stack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)16);;};

  UnityAssertEqualNumber((_U_SINT)((((void *)0))), (_U_SINT)((stack->tail)), (((void *)0)), (_U_UINT)17, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((((void *)0))), (_U_SINT)((stack->head)), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)20, UNITY_DISPLAY_STYLE_INT);

}

void test_stackelem_should_return_int(){

  struct StackElement *stackelem = malloc (sizeof (StackElement));

  stackelem = StackElementCreate (4);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((stackelem->data)), (((void *)0)), (_U_UINT)33, UNITY_DISPLAY_STYLE_INT);

}

void test_stackadd(){

  Stack *stack = stackCreate ();

  struct StackElement *stackelem = malloc (sizeof (StackElement));

  StackElement *stackelem1 = StackElementCreate (2);

  StackElement *stackelem2 = StackElementCreate (3);

  StackElement *stackelem3 = StackElementCreate (4);

  stackAdd (stack, stackelem1);

  stackAdd (stack, stackelem2);

  stackAdd (stack, stackelem3);

  if ((((stackelem1)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)52);;};

  if ((((stackelem2)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)53);;};

  if ((((stackelem3)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)54);;};

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)55, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((stackelem3)), (_U_SINT)((stack->head)), (((void *)0)), (_U_UINT)56, UNITY_DISPLAY_STYLE_INT);





}

void test_removestack(){

  Stack *stack = stackCreate ();

  struct StackElement *stackelem = malloc (sizeof (StackElement));

  StackElement *stackelem1 = StackElementCreate (2);

  StackElement *stackelem2 = StackElementCreate (3);

  StackElement *stackelem3 = StackElementCreate (4);

  stackAdd (stack, stackelem1);

  stackAdd (stack, stackelem2);

  stackAdd (stack, stackelem3);



  struct StackElement *remove = malloc (sizeof (StackElement));

  remove = stackRemove (stack);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);



  }
