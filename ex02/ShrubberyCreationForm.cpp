#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm ("home" , 145, 137)
{

}
void ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const
{
   std::cout << "is here" <<  std::endl;
   if(getIsSigned() && bureaucrat.getGrade() <= 137)
   {
      char const *File = target.c_str();
      std::ofstream file(File);
      file << "       /\\\n";
      file << "      /**\\\n";
      file << "     /****\\\n";
      file << "    /******\\\n";
      file << "   /********\\\n";
      file << "      ||  ||\n";
      file << "      ||  ||\n";
      file.close();
   }
   throw  ShrubberyCreationForm::GradeTooLowException(); 
}