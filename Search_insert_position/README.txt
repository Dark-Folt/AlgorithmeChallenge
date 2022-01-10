On nous fournit un tableau d'entier déjà trié et une valeure cible.
Le but est de parcourir le tableau et de renvoyer l'indice de la cible si la cible est dans le tableau
Sinon renvoyer l'indice de la position ou la cible devra être.

nums    = [1, 3, 5, 6], target = 5
Output  = 2 

nums    = [1, 3, 5, 6], target = 2
Output  = 1 car 2 n'est pas dans le tableau mais on renvoi la position qu'il devrait y être.



Algo::


         0  1  2  3 
nums = [ 1, 3, 5, 6], target = 2



DEBUT:
    n <- taille(nums)
    pos <- INF
    SI target < nums[n/2] ALORS:
        POUR i ALLANT DE 0 A n/2 FAIRE:
            SI target < nums[i] ALORS:
                RETOURNER i
            FIN SI 
        FIN POUR
    SINON SI target > nums[n/2] ALORS:
        POUR i ALLANT DE (n/2)+1 A n FAIRE:
            SI target < nums[i] ALORS:
                RETOURNER i
            SINON SI (i == n - 1 && target != nums[i]) ALORS
                RETOURNER i + 1
            FIN SI
        FIN POUR
    FIN SI
FIN:

        
        



