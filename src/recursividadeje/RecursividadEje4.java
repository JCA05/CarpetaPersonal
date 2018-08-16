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
public class RecursividadEje4 {
    public static void main(String[] args) {
         
         System.out.println(cociente(10,2));
     }
    private static int cociente (int a,int b){
       if(a<b){
           return 0;
       }
       return 1+(cociente(a-b,b));
    }
    
}
