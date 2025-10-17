# profusion


Write a function that determines whether two given strings are permutations of each other.  
Formally, two strings are permutations if they consist of exactly the same characters with identical frequencies, regardless of order.  
Your function should take two input strings, s1 and s2, and return a boolean value:  
- true if s1 is a permutation of s2  
- false otherwise  

Examples  
Input: ("ab", "ba") → Output: true  
Input: ("abc", "acb") → Output: true  
Input: ("aab", "aba") → Output: true  

Input: ("ab", "aa") → Output: false  
Input: ("ab", "aba") → Output: false  
Input: ("aab", "abb") → Output: false  

```
arePermutations(char *c1, char *c2){  
	(length c1 != length c2) return 0;  
	int freq[256] ~ ASCII
	for =>  freq[c1]++              => aaabc => +3a1b1c
	for =>  freq[c2]--			    => abcaa => -3a1b1c
	for =>  freq[i] != 0 NÃO SÃO PERMUTAS
                      else SÃO PERMUTAS
    O(n)
}

main(){
	usuario digita
    stdin
    arePermutations
}

```