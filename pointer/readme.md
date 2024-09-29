 A pointer is a reference to the menory address of another variable in c.
 When I say int *ptr=&b, I mean: "O ptr, store for me the address of b."
I also mean by extension tha b must be an integer
 Since a pointer is also a variable albeit being special, it must also have an address in memory.
 When I want to retrieve the value stored in the address that the pointer points to, I use a deferencing operator.
 The de-referencing operator(*) is the same as the pointer operator. 
 The only difference is on which side of the assignment operator it falls on.
 If it falls to the left, it is a pointer assignment, if it has'nt been initialised previously(then, it becomes a de-referencing operator)
 If it falls on the left, it is a dereferencing operator.
 The value of a variable can be altered via its pointer.
 For example consider, the code below:
 'int a,b, *ptr_a, *ptr_b;
  a=5;
  b=10;
  ptr_a = &a;
  ptr_b = &b;
  *ptr_a = *ptr_b;
  When a is printed, its value is seen to be 10.
  THis is because the code above says de-refernce b and change the value that ptr_a refernce to the value of what ptr_b points to.
  printf("%d", a);'