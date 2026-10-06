//It is not mentioned in c++ stantards that negative numbers are definetly represented/stored using 2's complement
//form. But its the best way to do so

//if there are n bits, then for signed integers we can store the below given range of numbers 
//( -2^(n-1) to (2^(n-1)-1) )

//Note : """ 2's complement of x is (nothing but the representation of) -x """ and vise-versa

//let n = 4 , so using above formula we can store a range of (-8 to 7)

//PROCESS TO CALCULATE 2'S COMPLEMENT
//let x = 5
//1) binary representation of 5:
//   0101
//2) inersion of each bit and then add 1 to it
//   (1010 + 1)
//3) 1011 = how -5 is represented in 2's complement form

//Shortcut formula of 2's complement (for n bits)
// (2^(n) - x)

//Why 2'complement only?
//1) only one representation for 0

//2) leading bit is always 1 for negative numbers 
//Explaination:
//for 32 bits we have range (-2^(31) to (2^(31) - 1))
//(1) For negative numbers - the first bit is always 1 and the number is represented in 2's complement form using
//                           the remaining 31 bits
//(2) For positive numbers - the first bit is always 0 and the number is represented in binary form(by carrying out 
//                           simple deci-binry conversion) using the remaining 31 bits 
//(3) For zero - all the bits are 0

