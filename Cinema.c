#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string CateEnfants[3] = {"Kévin JJB: le Jeune & Joli Bambin", "Grégoire chez les scouts", "Grégoire story: première communion"};   //Ces tableaux sont présents dans l'unique but de respecter l'énoncé qui les mentionne
    string CateAdos[3] = {"Kévin adventure: mission dépucelage", "Grégoire story: infiltration au séminaire", "Kévin Da Club"};
    string CateAdultes[3] = {"The Shining Bald", "La Nonne Acceptation of the Calvitie", "Conjuring Implant Capillaire vs Alopécie"};

    int age = get_int("Combien d'années as-tu?\n");
    if (age < 11)
    {
        string Enfantchoix = get_string("Veux-tu voir Grégoire chez les scouts?\n");
        if (strcmp(Enfantchoix, "oui") == 0)
        {
            printf("Très bon choix");
        }
        else
        {
            string Enfantchoix2 = get_string("Veux-tu voir Kévin JJB: le Jeune & Joli Bambin?\n");
            if (strcmp(Enfantchoix2, "oui") == 0)
            {
                printf("Très bon choix");
            }
            else
            {
                string Enfantchoix3 = get_string("Veux-tu voir Grégoire story: première communion?\n");
                if (strcmp(Enfantchoix3, "oui") == 0)
                {
                    printf("Très bon choix");
                }
                else
                {
                    printf("Aucun des films de ta catégorie d'âge ne trouve grâce à tes yeux, n'hésite pas à venir découvrir les nouvelles sorties mercredi prochain, à bientôt");
                }


            }
        }
    }
    else if (age > 18)
    {
        string Adultechoix = get_string("Veux-tu voir The Shining Bald?\n");
        if (strcmp(Adultechoix, "oui") == 0)
        {
            printf("Très bon choix");
        }
        else
        {
            string Adultechoix2 = get_string("Veux-tu voir La Nonne Acceptation of the Calvitie?\n");
            if (strcmp(Adultechoix2, "oui") == 0)
            {
                printf("Très bon choix");
            }
            else
            {
                string Adultechoix3 = get_string("Veux-tu voir Conjuring Implant Capillaire vs Alopécie\n");
                if (strcmp(Adultechoix3, "oui") == 0)
                {
                    printf("Très bon choix");
                }
                else
                {
                    printf("Tu as trop peur de voir les cheveux au fond de la douche et tu es un peu adulescent sur les bords? Je te propose les films jeunesses: ");
                    string Adoschoix = get_string("Veux-tu voir Kévin Da Club?\n");
        if (strcmp(Adoschoix, "oui") == 0)
        {
            printf("Très bon choix");
        }
        else
        {
            string Adoschoix2 = get_string("Veux-tu voir Grégoire story: infiltration au séminaire?\n");
            if (strcmp(Adoschoix2, "oui") == 0)
            {
                printf("Très bon choix");
            }
            else
            {
                string Adoschoix3 = get_string("Veux-tu voir Kévin adventure: mission dépucelage?\n");
                if (strcmp(Adoschoix3, "oui") == 0)
                {
                    printf("Très bon choix");
                }
                else
                {
                    printf("Tu es difficile et tu as gardé ton âme d'enfant? :-) ");
                    string Enfantchoix = get_string("Veux-tu voir Grégoire chez les scouts?\n");
                        if (strcmp(Enfantchoix, "oui") == 0)
                        {
                            printf("Très bon choix");
                        }
                        else
                        {
                            string Enfantchoix2 = get_string("Veux-tu voir Kévin JJB: le Jeune & Joli Bambin?\n");
                            if (strcmp(Enfantchoix2, "oui") == 0)
                            {
                                printf("Très bon choix");
                            }
                            else
                            {
                                string Enfantchoix3 = get_string("Veux-tu voir Grégoire story: première communion?\n");
                                if (strcmp(Enfantchoix3, "oui") == 0)
                                {
                                    printf("Très bon choix");
                                }
                                else
                                {
                                    printf("Aucun des films actuellement à l'affiche ne trouve grâce à tes yeux malheureusement, n'hésite pas à venir découvrir les nouvelles sorties mercredi prochain, à bientôt ");
                                }


                            }
                        }
                                }


            }
        }
                }


            }
        }
    }
    else
    {
        string Adoschoix = get_string("Veux-tu voir Kévin Da Club?\n");
        if (strcmp(Adoschoix, "oui") == 0)
        {
            printf("Très bon choix");
        }
        else
        {
            string Adoschoix2 = get_string("Veux-tu voir Grégoire story: infiltration au séminaire?\n");
            if (strcmp(Adoschoix2, "oui") == 0)
            {
                printf("Très bon choix");
            }
            else
            {
                string Adoschoix3 = get_string("Veux-tu voir Kévin adventure: mission dépucelage?\n");
                if (strcmp(Adoschoix3, "oui") == 0)
                {
                    printf("Très bon choix");
                }
                else
                {
                    printf("Aucun des films destinés à ta tranche d'âge ne te tente, je te propose donc les films pour enfant: ");
                    string Enfantchoix = get_string("Veux-tu voir Grégoire chez les scouts?\n");
                        if (strcmp(Enfantchoix, "oui") == 0)
                        {
                            printf("Très bon choix");
                        }
                        else
                        {
                            string Enfantchoix2 = get_string("Veux-tu voir Kévin JJB: le Jeune & Joli Bambin?\n");
                            if (strcmp(Enfantchoix2, "oui") == 0)
                            {
                                printf("Très bon choix");
                            }
                            else
                            {
                                string Enfantchoix3 = get_string("Veux-tu voir Grégoire story: première communion?\n");
                                if (strcmp(Enfantchoix3, "oui") == 0)
                                {
                                    printf("Très bon choix");
                                }
                                else
                                {
                                    printf("Aucun des films autorisés pour ta catégorie d'âge ne trouve grâce à tes yeux, n'hésite pas à venir découvrir les nouvelles sorties mercredi prochain, à bientôt ");
                                }


                            }
                        }
                                }


            }
        }
    }
}
