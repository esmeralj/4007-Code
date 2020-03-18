
#ifndef UNTITLED_MONEY_H
#define UNTITLED_MONEY_H

#ifndef MONEY_H
#define MONEY_H

class Money
{
private:

    static const int SILVER_TO_COPPER = 10;
    static const int GOLD_TO_COPPER = 100;
    static const int PLATINUM_TO_COPPER = 1000;


    int totalCopper;
public:

    static const int COPPER = 0;
    static const int SILVER = 1;
    static const int GOLD = 2;
    static const int PLATINUM = 3;


    Money(int = 0, int = 0, int = 0, int = 0);


    void addCopper(int);
    void addSilver(int);
    void addGold(int);
    void addPlatinum(int);


    void addCoin(int,int);


    void removeCopper(int);
    void removeSilver(int);
    void removeGold(int);
    void removePlatinum(int);


    int getCopper();
    int getSilver();
    int getGold();
    int getPlatinum();


    bool operator>(const Money &);
    bool operator>=(const Money &);
    bool operator<(const Money &);
    bool operator<=(const Money &);
    bool operator==(const Money &);


    Money & operator+=(const Money &);
    Money & operator-=(const Money &);
};

#endif

#endif //UNTITLED_MONEY_H







