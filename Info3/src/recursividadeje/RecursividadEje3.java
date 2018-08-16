/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package recursividadeje;

/**
 *
 * @author alumno
 */
public class RecursividadEje3 {
     public static void main(String[] args) {
         
         System.out.println(potencia(3,2));
     }
     private static int potencia(int base, int exp){
         if(exp==1){
             return base;
         }
         return base+potencia(base,exp-1);
     }
}
