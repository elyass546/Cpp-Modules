#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) {
    _Name = "Shrubbery";
    _SignGrade = 145;
    _ExecuteGrade = 137;
    _target = target;
}

void    ShrubberyCreationForm::execution( void ) const {

    std::ofstream	NewFile( _target + "_shrubbery");

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

}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & shru) {
    *this = shru;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const& shru ) {
    _Name = shru._Name;
    _SignGrade = shru._SignGrade;
    _ExecuteGrade = shru._ExecuteGrade;
    _target = shru._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

void    ShrubberyCreationForm::execute( Bureaucrat const & bur ) const {
    if (getIndice() == false)
        throw Form::UnsignedFormException();
    if (bur.getGrade() > _ExecuteGrade)
		throw Form::GradeTooLowException();
    ShrubberyCreationForm::execution();
}
