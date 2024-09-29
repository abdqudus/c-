  #Pointers In C
 A pointer is a reference to the menory address of another variable in c.<br>
 When I say int *ptr=&b, I mean: "O ptr, store for me the address of b."<br>
I also mean by extension tha b must be an integer <br>
 Since a pointer is also a variable albeit being special, it must also have an address in memory.<br>
 When I want to retrieve the value stored in the address that the pointer points to, I use a deferencing operator.<br>
 The de-referencing operator(*) is the same as the pointer operator. <br>
 The only difference is on which side of the assignment operator it falls on.<br>
 If it falls to the left, it is a pointer assignment, if it has'nt been initialised previously(then, it becomes a de-referencing operator)<br>
 If it falls on the left, it is a dereferencing operator.<br>
 The value of a variable can be altered via its pointer.<br>
 For example consider, the code below:<br>
 'int a,b, *ptr_a, *ptr_b;<br>
  b=10;<br>
  ptr_b = &b;<br>
  *ptr_a = *ptr_b;<br>
  When a is printed, its value is seen to be 10.<br>
  THis is because the code above says de-refernce b and change the value that ptr_a refernce to the value of what ptr_b points to.<br>
  printf("%d", a);'<br>
  To initialize a double pointer, we use the syntax below: <br>
  int a,b, *ptr_a;<br>
  a=5;<br>
 int **ptr_b=&a;<br>

 So here, since ptr_b is storing the address of ptr_a, and C been strongly typed. <br>
 Recall also that the * is the one indicating that the variable is a pointer variable. <br>
 For every variable, its type must be mentioned. A double pointer however is not an int nor float, rather, its a pointer to a pointer that holds an int. <br>
 Therefore, its type is int* and the second * is just an indication that it is a pointer in itself.<br>
 The same applies for dereferncing a double pointer.<br>
 The same applies for triple pointer(***) <br>
Hence printf("%d", *ptr_b) ==  printf("%d", &b) which is the address of b.
While  printf("%d", **ptr_b) ===  printf("%d", b) which is the value stored in the b variable.
