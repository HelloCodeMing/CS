#include <cstdio>
#include <unordered_map>

#define FUNCTION_H

namespace CS {
    typedef void(*FunPtr)(void);
    typedef std::unordered_map<std::string, FunPtr> FunctionTable;

    namespace Function {
        void println() {
            printf("3\n");
        }

        void RegisterFunctions(FunctionTable& fun_table) {
            fun_table["println"] = println;
        }
    }
}
