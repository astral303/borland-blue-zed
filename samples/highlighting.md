# Highlighting sample

**Status on 2026-11-16:** one check waits, in the car.

Ordinary prose stays yellow. **Bold labels:** should be cyan and bold.
Compare *emphasis*, `inline code`, and [a link](https://zed.dev).

## Settings

```toml
[settings]
lockfile = true
locked = false
retries = 3
profile = "classic"
```

## Member fields

```cpp
void record_time(uint64_t now_us);

// Count the records sent in this session.
void count_sent() {
    ++counters_.records_sent;
}
```
