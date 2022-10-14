#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) {
    _Name = "Hello";
    _SignGrade = 145;
    _ExecuteGrade = 137;
    std::ofstream	NewFile(_Name + "_shrubbery");

    NewFile << "     - - - \n";
    NewFile << "       -        -  -     --    - \n";
    NewFile << " -                 -         -  - \n";
    NewFile << "                     - \n";
    NewFile << "                    -                -- \n";
    NewFile << "    -          -            -              - \n";
    NewFile << "    -            '-,        -               - \n";
    NewFile << "    -              'b      * \n";
    NewFile << "     -              '$    #-                -- \n";
    NewFile << "    -    -           $:   #:               - \n";
    NewFile << "  --      -  --      *#  @):        -   - - \n";
    NewFile << "               -     :@,@):   ,-**:'   - \n";
    NewFile << "   -      -,         :@@*: --**'      -   - \n";
    NewFile << "            '#o-    -:(@'-@*\"'  - \n";
    NewFile << "    -  -       'bq,--:,@@*'   ,*      -  - \n";
    NewFile << "               ,p$q8,:@)'  -p*'      - \n";
    NewFile << "        -     '  - '@@Pp@@*'    -  - \n";
    NewFile << "         -  - --    Y7'.'     -  - \n";
    NewFile << "                   :@):. \n";
    NewFile << "                  .:@:'. \n";
    NewFile << "                .::(@:.";
    NewFile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & shru)
{
    *this = shru;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const& shru ){
    _Name = shru._Name;
    _SignGrade = shru._SignGrade;
    _ExecuteGrade = shru._ExecuteGrade;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}
