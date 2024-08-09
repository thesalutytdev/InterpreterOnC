#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
#include "utils.h"

class UUID {
    public:
        const long int id = generate_id();
        UUID() : id() {
            
        }
        long int get_id() { return id; }
    private:
        long int generate_id() {
            long int rndnum = random();
            bool isCopy = isinarray(uuids, rndnum);

            if (isCopy) {
                return generate_id();
            }

            if (index == NULL) {
                index = 0;
            } else {
                uuids[index] = rndnum;
                index++;
            }
            return rndnum;
        }
        static long int uuids[];
        static int index;
    static UUID* instance;
    public:
        static UUID* get_instance() {
            if (!instance) {
                instance = new UUID();
            }
            return instance;
        }
    
};
