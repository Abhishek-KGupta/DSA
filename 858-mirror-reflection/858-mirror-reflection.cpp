class Solution {
public:
    int mirrorReflection(int p, int q) {
        
        int no_of_reflections = q;
        int no_of_rooms = p;
        
        while( no_of_reflections % 2 == 0 and no_of_rooms % 2 == 0)
        {
            no_of_reflections /= 2;
            no_of_rooms /= 2;
        }
        
        if(no_of_reflections % 2 != 0 and no_of_rooms % 2 == 0)
            return 2;
        
        if(no_of_rooms % 2 != 0 and no_of_reflections % 2 == 0)
            return 0;
        
        if(no_of_rooms % 2 != 0 and no_of_reflections % 2 !=0)
            return 1;
        
        return 69;
    }
};