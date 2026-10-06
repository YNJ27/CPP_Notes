//Fixed sized - 1) Arrays allocated on function call stack (as we did in the previous vedios)

//                 These arrays are removed once the function call is over. So if you tried to access the memory of 
//                 these array elements after the call is over , you will get 'invalid memory'

//              2) Arrays allocated in heap (dynamically created) -
//                 Advantages: 1 - The elements are still there and you are accessing valid memory
//                             2 - Unlike general arrays, you can declare the array without providing size initially
//                                 And can specify the size later
//                                 Ex: int *arr
//                                     arr = new int[100]

//Dynamic sized array - vectors in stl 
