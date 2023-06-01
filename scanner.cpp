#include "scanner.h"
#include <string>
#include <vector>

namespace Cool {

    class Scanner {
        public:
            Scanner(const std::string& src);
        private:
            unsigned int start;
            unsigned int current;
            unsigned int line;
            const std::string& source;
            std::vector<Token> tokens;
    }

}