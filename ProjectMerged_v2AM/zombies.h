#ifndef ZOMBIES_H
#define ZOMBIES_H

class zombies
{
    int Health;
    int Movement_delay;
    int Attack_power;
    int Time_between_Attack;

public:
    zombies(int H, int M, int A, int T): Health(H), Movement_delay(M), Attack_power(A), Time_between_Attack(T){}
    void set_Health(int H);
    void set_Movement_dealy(int M);
    void set_Attack_power(int A);
    void set_Time_between_Attack(int T);
    int get_Health(int H);
    int get_Movement_dealy();
    int get_Attack_power();
    int set_Time_between_Attack();


};

#endif // ZOMBIES_H
