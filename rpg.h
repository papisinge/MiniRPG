#ifndef
# define RPG_H_

typedef struct  s_equipement
{
    char        *name;
    int         hp_bonus;
    int         def_bonus;
    int         attack_bonus;
    t_equip     *next;
    t_equip     *prev;
}               t_equip;

typedef struct   s_perso
{
    int         hp_base;
    int         hp_actu;
    int         def_base;
    int         def_tot;
    int         attack_base;
    int         def_tot;
    int         pc_base;
    int         xp;
    int         lvl;
}               t_perso;

typedef struct  s_monstre
{

}                  t_monstre
#endif /* RPG_H_ */
