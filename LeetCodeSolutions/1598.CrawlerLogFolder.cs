public class Solution {
    public int MinOperations(string[] logs) {

        int RetVal = 0;


        foreach(var i in logs)
        {
            switch (i){
                case "../":
                RetVal--;
                break;

                case "./":
                break;

                default:
                    RetVal++;
                break;
            }

            if(RetVal < 0)
            {
                RetVal = 0;
            }
        }

            return RetVal;

    }
}