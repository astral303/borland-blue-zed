#include <stdint.h>

void record_time(uint64_t now_us);

struct Counters {
    unsigned records_sent = 0;
    unsigned records_dropped = 0;
};

class ProgramRecords {
public:
    // Count the records sent in this session.
    void count_sent() {
        ++counters_.records_sent;
    }

    void count_dropped() {
        ++counters_.records_dropped;
    }

    bool has_drops() const {
        return counters_.records_dropped > 0;
    }

private:
    Counters counters_;
};
