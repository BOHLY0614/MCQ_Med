#ifndef QUESTION_H
#define QUESTION_H
#include <string>
#include <iostream>
using namespace std;


class Question
{
public:
    Question();
    Question(string a, string b, int c);
    void set_module(int a);
    virtual ~Question();
    string reponse;
    string Enonce;
    int identifiant;
    int Module;
    int Passee;

protected:

private:
};

#endif // QUESTION_H
