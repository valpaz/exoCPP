#ifndef ESSAI_H
#define ESSAI_H


class testCopie
{
    public:
    testCopie();
    testCopie ( const testCopie &source);
    int attribut = 2;
    int *p = &attribut;
    void impPointer();
    void modif();

};





class essai
{
public:

    essai();
    ~essai();
    int attribut = 3;
    void print();
};

#endif // ESSAI_H
