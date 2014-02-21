String-Permutation
==================
Starting from the first position of a string swap with every other characters possible and recur i.e. continue the same process for the remaining characters in the string after this swap.

For example if the string is "ABC"

1. Swap 'A' with 'A' -> "ABC"
  
  Recur after the above swap resulting in the following

  Swap 'B' and 'B' -> "ABC" 
  
  Swap 'B' and 'C' -> "ACB" 
  
  Now we got two possible permutation of strings -> "ABC" and "ACB"
  
2. Swap 'A' with 'B' -> "BAC"
  
  Recur after the above swap resulting in the following

  Swap 'A' and 'A' -> "BAC" 
  
  Swap 'A' and 'C' -> "BCA" 
  
  Now we got two possible permutation of strings -> "BAC" and "BCA"
  
3. Swap 'A' with 'C' -> "CBA"
  
  Recur after the above swap resulting in the following

  Swap 'B' and 'B' -> "CBA" 
  
  Swap 'B' and 'A' -> "CAB" 
  
  Now we got two possible permutation of strings -> "CBA" and "CAB"


The final outcome:
"ABC"

"ACB"

"BAC"

"BCA"

"CBA"

"CAB"

Implementation: Recursive Method
