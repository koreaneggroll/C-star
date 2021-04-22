#include "../include/C+-.h"

void error(const int error_code, char *lex, const int line){
    if(error_code is SyntaxError){
       printf("%sSyntax error: %sno such instruction '%s' at line: %d\n", red(), white(), lex, line);
    }

    elif(error_code is OverFlowError){
       printf("%sOverFlow error: %s%s at line: %d\n", red(), white(), lex, line);
    }

    elif(error_code is WhiteSpaceWarning){
       printf("%sWhiteSpaceWarning: %s%s at line: %d\n", purple(), white(), lex, line);
    }

    elif(error_code is ArithmeticError){
        printf("%sArithmetic Error: %s%s at line: %d\n", red(), white(), lex, line);
    }

    elif(error_code is FloatingPointError){
        printf("%sFloating Point Error: %s%s at line: %d\n", red(), white(), lex, line);
    }

    elif(error_code is IncludeError){
        printf("%sInclude Error: %s%s at line: %d\n", red(), white(), lex, line);
    }

    elif(error_code is MemoryOverload){
        printf("%sMemory Overload: %s%s at line: %d\n", red(), white(), lex, line);
    }

    elif(error_code is RunTimeError){
        printf("%sRunTimeError: %s%s at line: %d\n", red(), white(), lex, line);
    }

    elif(error_code is ZeroDivisionError){
        printf("%sZeroDivisionError: %s%s at line: %d\n", red(), white(), lex, line);
    }

    elif(error_code is FileNotExist){
        printf("%sFileNotExist: %s%s at line: %d\n", red(), white(), lex, line);
    }

    elif(error_code is TypeError){
        printf("%sTypeError: %s%s at line: %d\n", red(), white(), lex, line);
    }
    elif(error_code is FileOpenError){
        printf("%sFileOpenError: %s%s at line %d\n", red(), white(), lex, line);
    }
    else{
        printf("Unknown error code: %d\n", error_code);
        exit(1);
    }
}
