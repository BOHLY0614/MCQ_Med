#include "Question.h"

Question::Question()
{
    //ctor
}

Question::Question(string a, string b, int c)
{
    Enonce = a;
    reponse = b;
    identifiant = c;
    Passee = 0;
}

void Question::set_module(int a)
{
    Module = a;
}

Question::~Question()
{
    //dtor
}
