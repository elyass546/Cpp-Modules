#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm{
    private:
        std::string _Name;
        int _SignGrade;
        int _ExecuteGrade;
    public:
        ShrubberyCreationForm( std::string );
        ShrubberyCreationForm( ShrubberyCreationForm const& );
        ShrubberyCreationForm&  operator=( ShrubberyCreationForm const& );
        ~ShrubberyCreationForm();
        class GradeTooHighExecption : std::exception {
            public:
                virtual const char *what() const throw();
        };
         class GradeTooLowExecption : std::exception {
            public:
                virtual const char *what() const throw();
        };
};

#endif