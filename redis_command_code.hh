#pragma once
namespace redis {

enum class protocol_state {
    error,
    eof,
    ok,
};

enum class command_code {
    set,
    mset,
    get,
    mget,
    del,
    echo,
    ping,
    incr,
    decr,
    incrby,
    decrby,
    command,
    exists,
    append,
    strlen,
    lpush,
    lpushx,
    lpop,
    llen,
    lindex,
    linsert,
    lrange,
    lset,
    rpush,
    rpushx,
    rpop,
    lrem,
    ltrim,
    hset,
    hdel,
    hget,
    hlen,
    hexists,
    hstrlen,
    hincrby,
    hincrbyfloat,
    hkeys,
    hvals,
    hmget,
    hmset,
    hgetall,
    sadd,
    scard,
    sismember,
    smembers,
    srem,
    sdiff,
    sdiffstore,
    sinter,
    sinterstore,
    sunion,
    sunionstore,
    smove,
    srandmember,
    spop,
    type,
    expire,
    pexpire,
    ttl,
    pttl,
    persist,
    zadd,
    zcard,
    zcount,
    zincrby,
    zrange,
    zrangebyscore,
    zrank,
    zrem,
    zremrangebyrank,
    zremrangebyscore,
    zrevrange,
    zrevrangebyscore,
    zrevrank,
    zscore,
    zunionstore,
    zinterstore,
    zdiffstore,
    zunion,
    zinter,
    zdiff,
    zscan,
    zrangebylex,
    zlexcount,
    zremrangebylex,
    select,
    geoadd,
    geohash,
    geodist,
    geopos,
    georadius,
    georadiusbymember,
    setbit,
    getbit,
    bitcount,
    bitop,
    bitpos,
    bitfield,
    pfadd,
    pfcount,
    pfmerge,
};
}
