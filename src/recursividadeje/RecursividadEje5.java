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
public class RecursividadEje5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int[] info ={3,7,9,11,5,13,15};
        mostarMatriz(info, info.length);
        
    }
    
    private static void mostarMatriz(int[] datos, int tamano){
        
        if (tamano !=0){
            System.out.println(datos[tamano-1]);
            mostarMatriz(datos,tamano-1);
        }
        
    }

  
}
