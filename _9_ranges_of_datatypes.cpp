// DATATYPE              NO OF BITS          RANGE(1)                     RANGE(2)

// char                     8              -128 to 127                    (-(2^7) to (2^7 - 1))
//   (*char is internally stored in the form of ascii values , and the given range is actually of those integer values
//    *And those integers are then converted from decimal to binary
//    *And as each bit can either store '0' or '1' we can store a total '2^8' numbers = '128(-ve)' , '0' and '127(+ve)')  

// unsigned char            8                 0 to 255                    (0 to (2^8 - 1))

// short                    16            -32768 to 32767                 (-(2^15) to (2^15 - 1))

// int                      32            ~(-(2.14)x10^9) to              (-(2^31) to (2^31 - 1))
//                                        ~(2.14)x10^9

// unsigned int             32             0 to ~(4.29)x10^9              (0 to (2^32 - 1))

// long long                64            ~(-(9.2)x10^18) to              (-(2^63) to (2^63 - 1)) 
//                                        ~(9.2)x10^18            

// unsigned long long       64             0 to ~(1.8)x10^19              (0 to (2^64 - 1))
//   (You can consider (2^64 - 1) as the longest integer which we can store)

// float                    32            ~(+/-(1.18)x10^(-38)) to        (~(+/-(2^(-126))) to ~(+/-(2^(128))))
//                                        ~(+/-(3.4)x10^38)

// double                   64            ~(+/-(2.23)x10^(-308)) to       (~(+/-(2^(-1022))) to ~(+/-(2^(1024))))
//                                        ~(+/-(1.8)x10^308)
//  (*Note:Floating point numbers are stored in a special way, the mantissa(for ex: here 1.18) and the exponent
//    (for ex: here 10^(-38)) are stored differently
//   *They store approx values
//    [for ex: '0.2' if converted to binary we get a recurring set of numbers i.e 00110011..... . So it may be stored
//     as 1.999999 so as to store a corresponding finite binary no] 
//   *Be carefull while comparing 2 floating point numbers because even though they look same they may be stored 
//    in different ways inernally
//   *Also they don't have all the numbers in their range , because we can have infinite numbers after the decimal 
//    point.That is why they store approx nos.  
//   *even thouh the range of double is very high still don't use it to store integers because it will give us  
//    apprxoimate values 

// bool                     8                   0 and 1                                              
//  (Even though bool have only 2 values 0 and 1 still it is internally represented in the form of 8 bits) 