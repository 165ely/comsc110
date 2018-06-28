prefix and postfix are:
	The position of operator to operand which indicate 
	when the operator is perform before or after on the operand.

Referencing a variable, constant, function means to return its value.
An operator is a function with a symbol(s) as its name, such as + - * / ++.
  a+b ==> operator+(a,b)
  operator: +
  operand: a, b

The actual evaluation of the following math expression:
    x = a + b * c - d;
    y = a++ + ++b * c - --d;
    
The explicit association of the operators must be used to clarify the precedence

Loops can be described by different but interchangible syntax:
    while, do-while, for

    for ( 	
    start_statement;
	test_statement1;
	change_statement
	) loop_actions;

    start_statement;
    while( test_statement2 ) {
    	loop_actions;
    	change_statement;
    }

    start_statement;
    do {
    	loop_actions;
    	change_statement;
    } while( test_statement1 );

Racing problem between stream devices and CPU. 
    demonstrated in lab5_1.cpp
    
Proper range expression: (deMOrgan Theorem)
    int i, x, y; // x is less than y

    // within x, y
    if( x<=i && i <=y )
    
    // inside of x, y
    if( x<i && i<y )
    
    // outside of x, y
    if( i<x || y <i )

Implcit and Explicit conversion for different data types
    int i=1;
    float f=2.2;
    char c='a';
    string s="this";
    
    cout << s+c << endl
         << i+c << endl
         << i+f << endl;
         
Loop Break & Loop Continue

Nested Loops
    example: 
        calculate all temperature in all spots of a container
    for(int x=0; x<100; x++) // 1ST level x is modified 100
        for(int y=0; y<50; y++) // 2ND level
            for(int z=0; z<50; z++) // 3RD level
                calculate_temp(x,y,z,a,b,c);

Accessing text file