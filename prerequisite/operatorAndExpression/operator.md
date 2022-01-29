# Operator And Expressions

### Operator
An operator specifies an operation sn operation to be performed that yields a value.

### Operand
An operand is a data item on which an **operator** acts.

### Type of operators
1. **Arithmetic operators**

 * Arithmetic operators are used for   numeric calculations.

 * | Operator | Purpose        |
   |:--------:|----------------|
   |     +    | addition       |
   |     -    | subtraction    |
   |     *    | multiplication |
   |     /    | division       |
   |     %    | remainder      |



	* %(modulus operator) can not be applied with floating point operands.
		* eg:- 3.4%2.3     //invalid
	* No exponent operator in C/C++.
	* Unary plus and unary minus diffrent from addition and subtraction operator.
	* when both operands are integer the result is always an integer.
	* when both operands are float the result is always float.
	* if one operand is float other one is integer then result is float.

2. **Assignment operators**
	* A value is stored in a variable using assignment operator.
	* **general syntax**
		* *variable_name assignment_operator (variable_name/constant/expression).*
	* **examples**
    ```c++
	     a=5;		// 5 is assign to variable a
	     b=2;		// 2 is assign to variable b
	     t=a+b-1;	// value to of expression a+b-1 assign to variable t
	     x=a;		// value of variable a is assign to variable x
	     y=b;		// value of varaible b is assign to varaible y

	```
	* when the variable on left hand side of assignment operator also ocuur on right hand side we can use *compound assignment operator*.
	* example ```x=x+5``` can be written as ```x+=5```. Here **+=** is compound assignment operator.
	* some of the compound assignment operator as follows
	* | expression       | equivalent to... |
	  |------------------|------------------|
	  | y += x;          | y = y + x;       |
      | x -= 5;          | x = x - 5;       |
      | x /= y;          | x = x / y;       |
      | x*= y+ 1;        | x=x*(y +1)       |
      | k%=5+x           | k=k%(5+x)        |





3. Increment and decrement operators

 * the increment (++) and decrement operator (--) are unary operator because thy operate ona single operand.
 * the increment operator increments the value of variable by 1 and decrement operator decrements the value of operator by 1.
 * | statement        | equivqlent to |
   |------------------|---------------|
   |  ++x;            | x=x+1;        |
   | --y;             | y=y-1;        |
 * these operators cant be used with constants or expressions.
 	 * ```++5;  or ++(a+b+c);     //both invalid statement```
 * **prefix increment/decrement**
 		* 
4. Relational operators

5. Logical operators

6. Conditional operators

7. Comma operators

8. sizeof operator

9. Bitwise operators

10. Other operators




### Precedence and Associativity of operators


| Level | Precedence group             | Operator                           | Description                      | Grouping      |
|-------|------------------------------|------------------------------------|----------------------------------|---------------|
| 1     | Scope                        | ::                                 | scope qualifier                  | Left-to-right |
| 2     | Postfix (unary)              | ++ --                              | postfix increment / decrement    | Left-to-right |
|       |                              | ()                                 | functional forms                 |               |
|       |                              | []                                 | subscript                        |               |
|       |                              | . ->                               | member access                    |               |
| 3     | Prefix (unary)               | ++ --                              | prefix increment / decrement     | Right-to-left |
|       |                              | ~ !                                | bitwise NOT / logical NOT        |               |
|       |                              | + -                                | unary prefix                     |               |
|       |                              | & *                                | reference / dereference          |               |
|       |                              | new delete                         | allocation / deallocation        |               |
|       |                              | sizeof                             | parameter pack                   |               |
|       |                              | (type)                             | C-style type-casting             |               |
| 4     | Pointer-to-member            | .* ->*                             | access pointer                   | Left-to-right |
| 5     | Arithmetic: scaling          | * / %                              | multiply, divide, modulo         | Left-to-right |
| 6     | Arithmetic: addition         | + -                                | addition, subtraction            | Left-to-right |
| 7     | Bitwise shift                | << >>                              | shift left, shift right          | Left-to-right |
| 8     | Relational                   | < > <= >=                          | comparison operators             | Left-to-right |
| 9     | Equality                     | == !=                              | equality / inequality            | Left-to-right |
| 10    | And                          | &                                  | bitwise AND                      | Left-to-right |
| 11    | Exclusive or                 | ^                                  | bitwise XOR                      | Left-to-right |
| 12    | Inclusive or                 | \|                                 | bitwise OR                       | Left-to-right |
| 13    | Conjunction                  | &&                                 | logical AND                      | Left-to-right |
| 14    | Disjunction                  | \|\|                               | logical OR                       | Left-to-right |
| 15    | Assignment-level expressions | = *= /= %= += -= >>= <<= &= ^= \|= | assignment / compound assignment | Right-to-left |
|       |                              | ?:                                 | conditional operator             |               |
| 16    | Sequencing                   | ,                                  | comma separator                  | Left-to-right |
