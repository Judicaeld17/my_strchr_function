// Description
// Create a function that searches for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument str. The terminating null character is considered to be part of the string. The function should return a pointer pointing to the last matching character, or null if no match was found.
char* my_strchr(char* range,char elmnt){
while(*range!='\0'){
    if(*range== elmnt){
     return range;
    } 
    range++;
}
return 0;
}