-       "" vs ''




    {         ""            }

    "\n" is a string literal (type char[2] in memory: ['\n', '\0']).
     (const char*)  
     
     it "decays" into a pointer (const char*) pointing to the first character ('\n'). 
     
     Therefore is read as the special character "\n". 
    
    
    {         ''            }
    
    
    However, '\n' is an ASCII number [10]. Meaning, '' is used for addresses! &'a' is also an address

    write() expects a memory address leading to a segmentation fault.

    - String Literals:
    String Literals Are Stored in Memory. In C, when you use a string literal ("hello"), it implicitly converts (decays) into a pointer to its first character (const char*).

