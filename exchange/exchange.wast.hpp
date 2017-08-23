const char* exchange_wast = R"=====(
(module
 (type $FUNCSIG$ijjjii (func (param i64 i64 i64 i32 i32) (result i32)))
 (type $FUNCSIG$vii (func (param i32 i32)))
 (type $FUNCSIG$vi (func (param i32)))
 (type $FUNCSIG$ijji (func (param i64 i64 i32) (result i32)))
 (type $FUNCSIG$ijjii (func (param i64 i64 i32 i32) (result i32)))
 (type $FUNCSIG$vj (func (param i64)))
 (type $FUNCSIG$i (func (result i32)))
 (type $FUNCSIG$iii (func (param i32 i32) (result i32)))
 (type $FUNCSIG$iiii (func (param i32 i32 i32) (result i32)))
 (import "env" "assert" (func $assert (param i32 i32)))
 (import "env" "back_secondary_i128i128" (func $back_secondary_i128i128 (param i64 i64 i64 i32 i32) (result i32)))
 (import "env" "diveq_i128" (func $diveq_i128 (param i32 i32)))
 (import "env" "front_secondary_i128i128" (func $front_secondary_i128i128 (param i64 i64 i64 i32 i32) (result i32)))
 (import "env" "load_i64" (func $load_i64 (param i64 i64 i64 i32 i32) (result i32)))
 (import "env" "load_primary_i128i128" (func $load_primary_i128i128 (param i64 i64 i64 i32 i32) (result i32)))
 (import "env" "memcpy" (func $memcpy (param i32 i32 i32) (result i32)))
 (import "env" "multeq_i128" (func $multeq_i128 (param i32 i32)))
 (import "env" "now" (func $now (result i32)))
 (import "env" "printi" (func $printi (param i64)))
 (import "env" "printi128" (func $printi128 (param i32)))
 (import "env" "printn" (func $printn (param i64)))
 (import "env" "prints" (func $prints (param i32)))
 (import "env" "readMessage" (func $readMessage (param i32 i32) (result i32)))
 (import "env" "remove_i128i128" (func $remove_i128i128 (param i64 i64 i32) (result i32)))
 (import "env" "remove_i64" (func $remove_i64 (param i64 i64 i32) (result i32)))
 (import "env" "requireAuth" (func $requireAuth (param i64)))
 (import "env" "store_i128i128" (func $store_i128i128 (param i64 i64 i32 i32) (result i32)))
 (import "env" "store_i64" (func $store_i64 (param i64 i64 i32 i32) (result i32)))
 (table 0 anyfunc)
 (memory $0 1)
 (data (i32.const 4) "\f0\t\00\00")
 (data (i32.const 16) "exchange\00")
 (data (i32.const 32) "integer overflow adding token balance\00")
 (data (i32.const 80) "remove\00")
 (data (i32.const 96) "store\00")
 (data (i32.const 112) "integer underflow subtracting token balance\00")
 (data (i32.const 160) "notified on transfer that is not relevant to this exchange\00")
 (data (i32.const 224) "match bid: \00")
 (data (i32.const 240) "{ quantity: \00")
 (data (i32.const 256) ", price: \00")
 (data (i32.const 272) " }\00")
 (data (i32.const 288) "\nmatch ask: \00")
 (data (i32.const 304) "\n\00")
 (data (i32.const 320) "\n\nmatch bid: \00")
 (data (i32.const 336) ":\00")
 (data (i32.const 352) "match ask: \00")
 (data (i32.const 368) "\n\n\00")
 (data (i32.const 384) "operator/ \00")
 (data (i32.const 400) " * \00")
 (data (i32.const 416) " / \00")
 (data (i32.const 432) "cast to 64 bit loss of precision\00")
 (data (i32.const 480) "b: \00")
 (data (i32.const 496) " \00")
 (data (i32.const 512) " \n\00")
 (data (i32.const 528) "operator* \00")
 (data (i32.const 544) ".\00")
 (data (i32.const 560) "/\00")
 (data (i32.const 576) "invalid quantity\00")
 (data (i32.const 608) "order expired\00")
 (data (i32.const 624) " created bid for \00")
 (data (i32.const 656) " currency at price: \00")
 (data (i32.const 688) "order with this id already exists\00")
 (data (i32.const 736) "/home/nathan/dev/eosio/eos/contracts/exchange/exchange.cpp\00")
 (data (i32.const 800) "\n No asks found, saving buyer account and storing bid\n\00")
 (data (i32.const 864) "order not completely filled\00")
 (data (i32.const 896) "error storing record\00")
 (data (i32.const 928) "ask: \00")
 (data (i32.const 944) "bid: \00")
 (data (i32.const 960) "lowest ask <= bid.price\n\00")
 (data (i32.const 992) "lowest_ask >= bid.price or buyer\'s bid has been filled\n\00")
 (data (i32.const 1056) "saving buyer\'s account\n\00")
 (data (i32.const 1088) " eos left over\00")
 (data (i32.const 1104) "bid filled\n\00")
 (data (i32.const 1120) " created sell for \00")
 (data (i32.const 1152) "\n No bids found, saving seller account and storing ask\n\00")
 (data (i32.const 1216) "\n bids found, lets see what matches\n\00")
 (data (i32.const 1264) "saving ask\n\00")
 (data (i32.const 1280) "ask filled\n\00")
 (data (i32.const 1296) "bid with this id does not exists\00")
 (data (i32.const 1344) "bid removed\n\00")
 (data (i32.const 1360) "ask with this id does not exists\00")
 (data (i32.const 1408) "ask removed\n\00")
 (data (i32.const 1424) "message shorter than expected\00")
 (data (i32.const 1456) "unknown action\00")
 (data (i32.const 1472) "currency\00")
 (data (i32.const 1488) "transfer\00")
 (data (i32.const 1504) "eos\00")
 (export "memory" (memory $0))
 (export "_ZN8exchange23apply_currency_transferERKN8currency8TransferE" (func $_ZN8exchange23apply_currency_transferERKN8currency8TransferE))
 (export "_ZN8exchange18apply_eos_transferERKN3eos8TransferE" (func $_ZN8exchange18apply_eos_transferERKN3eos8TransferE))
 (export "_ZN8exchange5matchERNS_3BidERNS_7AccountERNS_3AskES3_" (func $_ZN8exchange5matchERNS_3BidERNS_7AccountERNS_3AskES3_))
 (export "_ZN8exchange18apply_exchange_buyENS_8BuyOrderE" (func $_ZN8exchange18apply_exchange_buyENS_8BuyOrderE))
 (export "_ZN8exchange19apply_exchange_sellENS_9SellOrderE" (func $_ZN8exchange19apply_exchange_sellENS_9SellOrderE))
 (export "_ZN8exchange25apply_exchange_cancel_buyENS_7OrderIDE" (func $_ZN8exchange25apply_exchange_cancel_buyENS_7OrderIDE))
 (export "_ZN8exchange26apply_exchange_cancel_sellENS_7OrderIDE" (func $_ZN8exchange26apply_exchange_cancel_sellENS_7OrderIDE))
 (export "init" (func $init))
 (export "apply" (func $apply))
 (func $_ZN8exchange23apply_currency_transferERKN8currency8TransferE (param $0 i32)
  (local $1 i64)
  (local $2 i32)
  (local $3 i64)
  (local $4 i32)
  (local $5 i64)
  (local $6 i64)
  (local $7 i64)
  (local $8 i64)
  (local $9 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 32)
    )
   )
  )
  (set_local $1
   (i64.load offset=8
    (get_local $0)
   )
  )
  (set_local $6
   (i64.const 0)
  )
  (set_local $5
   (i64.const 59)
  )
  (set_local $4
   (i32.const 16)
  )
  (set_local $7
   (i64.const 0)
  )
  (loop $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (block $label$5
        (br_if $label$5
         (i64.gt_u
          (get_local $6)
          (i64.const 7)
         )
        )
        (br_if $label$4
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $2
             (i32.load8_s
              (get_local $4)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $2
         (i32.add
          (get_local $2)
          (i32.const 160)
         )
        )
        (br $label$3)
       )
       (set_local $8
        (i64.const 0)
       )
       (br_if $label$2
        (i64.le_u
         (get_local $6)
         (i64.const 11)
        )
       )
       (br $label$1)
      )
      (set_local $2
       (select
        (i32.add
         (get_local $2)
         (i32.const 234)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $2)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $8
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $2)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $8
     (i64.shl
      (i64.and
       (get_local $8)
       (i64.const 31)
      )
      (i64.and
       (get_local $5)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $4
    (i32.add
     (get_local $4)
     (i32.const 1)
    )
   )
   (set_local $6
    (i64.add
     (get_local $6)
     (i64.const 1)
    )
   )
   (set_local $7
    (i64.or
     (get_local $8)
     (get_local $7)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $5
      (i64.add
       (get_local $5)
       (i64.const -5)
      )
     )
     (i64.const -6)
    )
   )
  )
  (set_local $3
   (i64.load
    (get_local $0)
   )
  )
  (block $label$6
   (block $label$7
    (block $label$8
     (block $label$9
      (br_if $label$9
       (i64.ne
        (get_local $1)
        (get_local $7)
       )
      )
      (i64.store offset=8
       (get_local $9)
       (i64.const 0)
      )
      (i64.store
       (get_local $9)
       (get_local $3)
      )
      (i64.store offset=16
       (get_local $9)
       (i64.const 0)
      )
      (i32.store offset=24
       (get_local $9)
       (i32.const 0)
      )
      (drop
       (call $load_i64
        (i64.const 3316479707209269248)
        (i64.const 3316479707209269248)
        (i64.const 632468476610478080)
        (get_local $9)
        (i32.const 28)
       )
      )
      (call $assert
       (i64.ge_u
        (i64.add
         (tee_local $6
          (i64.load offset=16
           (get_local $0)
          )
         )
         (i64.load offset=16
          (get_local $9)
         )
        )
        (get_local $6)
       )
       (i32.const 32)
      )
      (i64.store offset=16
       (get_local $9)
       (tee_local $6
        (i64.add
         (i64.load offset=16
          (get_local $9)
         )
         (i64.load offset=16
          (get_local $0)
         )
        )
       )
      )
      (br_if $label$8
       (i32.eqz
        (i32.or
         (i64.ne
          (i64.or
           (i64.load offset=8
            (get_local $9)
           )
           (get_local $6)
          )
          (i64.const 0)
         )
         (i32.load offset=24
          (get_local $9)
         )
        )
       )
      )
      (call $prints
       (i32.const 96)
      )
      (drop
       (call $store_i64
        (i64.const 3316479707209269248)
        (i64.const 632468476610478080)
        (get_local $9)
        (i32.const 28)
       )
      )
      (br $label$6)
     )
     (set_local $6
      (i64.const 0)
     )
     (set_local $5
      (i64.const 59)
     )
     (set_local $4
      (i32.const 16)
     )
     (set_local $7
      (i64.const 0)
     )
     (loop $label$10
      (block $label$11
       (block $label$12
        (block $label$13
         (block $label$14
          (block $label$15
           (br_if $label$15
            (i64.gt_u
             (get_local $6)
             (i64.const 7)
            )
           )
           (br_if $label$14
            (i32.gt_u
             (i32.and
              (i32.add
               (tee_local $2
                (i32.load8_s
                 (get_local $4)
                )
               )
               (i32.const -97)
              )
              (i32.const 255)
             )
             (i32.const 25)
            )
           )
           (set_local $2
            (i32.add
             (get_local $2)
             (i32.const 160)
            )
           )
           (br $label$13)
          )
          (set_local $8
           (i64.const 0)
          )
          (br_if $label$12
           (i64.le_u
            (get_local $6)
            (i64.const 11)
           )
          )
          (br $label$11)
         )
         (set_local $2
          (select
           (i32.add
            (get_local $2)
            (i32.const 234)
           )
           (i32.const 0)
           (i32.lt_u
            (i32.and
             (i32.add
              (get_local $2)
              (i32.const -49)
             )
             (i32.const 255)
            )
            (i32.const 5)
           )
          )
         )
        )
        (set_local $8
         (i64.shr_s
          (i64.shl
           (i64.extend_u/i32
            (get_local $2)
           )
           (i64.const 56)
          )
          (i64.const 56)
         )
        )
       )
       (set_local $8
        (i64.shl
         (i64.and
          (get_local $8)
          (i64.const 31)
         )
         (i64.and
          (get_local $5)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $4
       (i32.add
        (get_local $4)
        (i32.const 1)
       )
      )
      (set_local $6
       (i64.add
        (get_local $6)
        (i64.const 1)
       )
      )
      (set_local $7
       (i64.or
        (get_local $8)
        (get_local $7)
       )
      )
      (br_if $label$10
       (i64.ne
        (tee_local $5
         (i64.add
          (get_local $5)
          (i64.const -5)
         )
        )
        (i64.const -6)
       )
      )
     )
     (block $label$16
      (br_if $label$16
       (i64.ne
        (get_local $3)
        (get_local $7)
       )
      )
      (call $requireAuth
       (get_local $1)
      )
      (set_local $6
       (i64.load
        (i32.add
         (get_local $0)
         (i32.const 8)
        )
       )
      )
      (i64.store offset=8
       (get_local $9)
       (i64.const 0)
      )
      (i64.store
       (get_local $9)
       (get_local $6)
      )
      (i64.store offset=16
       (get_local $9)
       (i64.const 0)
      )
      (i32.store offset=24
       (get_local $9)
       (i32.const 0)
      )
      (drop
       (call $load_i64
        (i64.const 3316479707209269248)
        (i64.const 3316479707209269248)
        (i64.const 632468476610478080)
        (get_local $9)
        (i32.const 28)
       )
      )
      (call $assert
       (i64.ge_u
        (i64.load offset=16
         (get_local $9)
        )
        (i64.load offset=16
         (get_local $0)
        )
       )
       (i32.const 112)
      )
      (i64.store offset=16
       (get_local $9)
       (tee_local $6
        (i64.sub
         (i64.load offset=16
          (get_local $9)
         )
         (i64.load offset=16
          (get_local $0)
         )
        )
       )
      )
      (br_if $label$7
       (i32.eqz
        (i32.or
         (i64.ne
          (i64.or
           (i64.load offset=8
            (get_local $9)
           )
           (get_local $6)
          )
          (i64.const 0)
         )
         (i32.load offset=24
          (get_local $9)
         )
        )
       )
      )
      (call $prints
       (i32.const 96)
      )
      (drop
       (call $store_i64
        (i64.const 3316479707209269248)
        (i64.const 632468476610478080)
        (get_local $9)
        (i32.const 28)
       )
      )
      (br $label$6)
     )
     (call $assert
      (i32.const 0)
      (i32.const 160)
     )
     (br $label$6)
    )
    (call $prints
     (i32.const 80)
    )
    (drop
     (call $remove_i64
      (i64.const 3316479707209269248)
      (i64.const 632468476610478080)
      (get_local $9)
     )
    )
    (br $label$6)
   )
   (call $prints
    (i32.const 80)
   )
   (drop
    (call $remove_i64
     (i64.const 3316479707209269248)
     (i64.const 632468476610478080)
     (get_local $9)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $9)
    (i32.const 32)
   )
  )
 )
 (func $_ZN8exchange18apply_eos_transferERKN3eos8TransferE (param $0 i32)
  (local $1 i64)
  (local $2 i32)
  (local $3 i64)
  (local $4 i32)
  (local $5 i64)
  (local $6 i64)
  (local $7 i64)
  (local $8 i64)
  (local $9 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 32)
    )
   )
  )
  (set_local $1
   (i64.load offset=8
    (get_local $0)
   )
  )
  (set_local $6
   (i64.const 0)
  )
  (set_local $5
   (i64.const 59)
  )
  (set_local $4
   (i32.const 16)
  )
  (set_local $7
   (i64.const 0)
  )
  (loop $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (block $label$5
        (br_if $label$5
         (i64.gt_u
          (get_local $6)
          (i64.const 7)
         )
        )
        (br_if $label$4
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $2
             (i32.load8_s
              (get_local $4)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $2
         (i32.add
          (get_local $2)
          (i32.const 160)
         )
        )
        (br $label$3)
       )
       (set_local $8
        (i64.const 0)
       )
       (br_if $label$2
        (i64.le_u
         (get_local $6)
         (i64.const 11)
        )
       )
       (br $label$1)
      )
      (set_local $2
       (select
        (i32.add
         (get_local $2)
         (i32.const 234)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $2)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $8
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $2)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $8
     (i64.shl
      (i64.and
       (get_local $8)
       (i64.const 31)
      )
      (i64.and
       (get_local $5)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $4
    (i32.add
     (get_local $4)
     (i32.const 1)
    )
   )
   (set_local $6
    (i64.add
     (get_local $6)
     (i64.const 1)
    )
   )
   (set_local $7
    (i64.or
     (get_local $8)
     (get_local $7)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $5
      (i64.add
       (get_local $5)
       (i64.const -5)
      )
     )
     (i64.const -6)
    )
   )
  )
  (set_local $3
   (i64.load
    (get_local $0)
   )
  )
  (block $label$6
   (block $label$7
    (block $label$8
     (block $label$9
      (br_if $label$9
       (i64.ne
        (get_local $1)
        (get_local $7)
       )
      )
      (i64.store offset=8
       (get_local $9)
       (i64.const 0)
      )
      (i64.store
       (get_local $9)
       (get_local $3)
      )
      (i64.store offset=16
       (get_local $9)
       (i64.const 0)
      )
      (i32.store offset=24
       (get_local $9)
       (i32.const 0)
      )
      (drop
       (call $load_i64
        (i64.const 3316479707209269248)
        (i64.const 3316479707209269248)
        (i64.const 632468476610478080)
        (get_local $9)
        (i32.const 28)
       )
      )
      (call $assert
       (i64.ge_u
        (i64.add
         (tee_local $6
          (i64.load offset=16
           (get_local $0)
          )
         )
         (i64.load offset=8
          (get_local $9)
         )
        )
        (get_local $6)
       )
       (i32.const 32)
      )
      (i64.store offset=8
       (get_local $9)
       (tee_local $6
        (i64.add
         (i64.load offset=8
          (get_local $9)
         )
         (i64.load offset=16
          (get_local $0)
         )
        )
       )
      )
      (br_if $label$8
       (i32.eqz
        (i32.or
         (i64.ne
          (i64.or
           (i64.load offset=16
            (get_local $9)
           )
           (get_local $6)
          )
          (i64.const 0)
         )
         (i32.load offset=24
          (get_local $9)
         )
        )
       )
      )
      (call $prints
       (i32.const 96)
      )
      (drop
       (call $store_i64
        (i64.const 3316479707209269248)
        (i64.const 632468476610478080)
        (get_local $9)
        (i32.const 28)
       )
      )
      (br $label$6)
     )
     (set_local $6
      (i64.const 0)
     )
     (set_local $5
      (i64.const 59)
     )
     (set_local $4
      (i32.const 16)
     )
     (set_local $7
      (i64.const 0)
     )
     (loop $label$10
      (block $label$11
       (block $label$12
        (block $label$13
         (block $label$14
          (block $label$15
           (br_if $label$15
            (i64.gt_u
             (get_local $6)
             (i64.const 7)
            )
           )
           (br_if $label$14
            (i32.gt_u
             (i32.and
              (i32.add
               (tee_local $2
                (i32.load8_s
                 (get_local $4)
                )
               )
               (i32.const -97)
              )
              (i32.const 255)
             )
             (i32.const 25)
            )
           )
           (set_local $2
            (i32.add
             (get_local $2)
             (i32.const 160)
            )
           )
           (br $label$13)
          )
          (set_local $8
           (i64.const 0)
          )
          (br_if $label$12
           (i64.le_u
            (get_local $6)
            (i64.const 11)
           )
          )
          (br $label$11)
         )
         (set_local $2
          (select
           (i32.add
            (get_local $2)
            (i32.const 234)
           )
           (i32.const 0)
           (i32.lt_u
            (i32.and
             (i32.add
              (get_local $2)
              (i32.const -49)
             )
             (i32.const 255)
            )
            (i32.const 5)
           )
          )
         )
        )
        (set_local $8
         (i64.shr_s
          (i64.shl
           (i64.extend_u/i32
            (get_local $2)
           )
           (i64.const 56)
          )
          (i64.const 56)
         )
        )
       )
       (set_local $8
        (i64.shl
         (i64.and
          (get_local $8)
          (i64.const 31)
         )
         (i64.and
          (get_local $5)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $4
       (i32.add
        (get_local $4)
        (i32.const 1)
       )
      )
      (set_local $6
       (i64.add
        (get_local $6)
        (i64.const 1)
       )
      )
      (set_local $7
       (i64.or
        (get_local $8)
        (get_local $7)
       )
      )
      (br_if $label$10
       (i64.ne
        (tee_local $5
         (i64.add
          (get_local $5)
          (i64.const -5)
         )
        )
        (i64.const -6)
       )
      )
     )
     (block $label$16
      (br_if $label$16
       (i64.ne
        (get_local $3)
        (get_local $7)
       )
      )
      (call $requireAuth
       (get_local $1)
      )
      (set_local $6
       (i64.load
        (i32.add
         (get_local $0)
         (i32.const 8)
        )
       )
      )
      (i64.store offset=8
       (get_local $9)
       (i64.const 0)
      )
      (i64.store
       (get_local $9)
       (get_local $6)
      )
      (i64.store offset=16
       (get_local $9)
       (i64.const 0)
      )
      (i32.store offset=24
       (get_local $9)
       (i32.const 0)
      )
      (drop
       (call $load_i64
        (i64.const 3316479707209269248)
        (i64.const 3316479707209269248)
        (i64.const 632468476610478080)
        (get_local $9)
        (i32.const 28)
       )
      )
      (call $assert
       (i64.ge_u
        (i64.load offset=8
         (get_local $9)
        )
        (i64.load offset=16
         (get_local $0)
        )
       )
       (i32.const 112)
      )
      (i64.store offset=8
       (get_local $9)
       (tee_local $6
        (i64.sub
         (i64.load offset=8
          (get_local $9)
         )
         (i64.load offset=16
          (get_local $0)
         )
        )
       )
      )
      (br_if $label$7
       (i32.eqz
        (i32.or
         (i64.ne
          (i64.or
           (i64.load offset=16
            (get_local $9)
           )
           (get_local $6)
          )
          (i64.const 0)
         )
         (i32.load offset=24
          (get_local $9)
         )
        )
       )
      )
      (call $prints
       (i32.const 96)
      )
      (drop
       (call $store_i64
        (i64.const 3316479707209269248)
        (i64.const 632468476610478080)
        (get_local $9)
        (i32.const 28)
       )
      )
      (br $label$6)
     )
     (call $assert
      (i32.const 0)
      (i32.const 160)
     )
     (br $label$6)
    )
    (call $prints
     (i32.const 80)
    )
    (drop
     (call $remove_i64
      (i64.const 3316479707209269248)
      (i64.const 632468476610478080)
      (get_local $9)
     )
    )
    (br $label$6)
   )
   (call $prints
    (i32.const 80)
   )
   (drop
    (call $remove_i64
     (i64.const 3316479707209269248)
     (i64.const 632468476610478080)
     (get_local $9)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $9)
    (i32.const 32)
   )
  )
 )
 (func $_ZN8exchange5matchERNS_3BidERNS_7AccountERNS_3AskES3_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i64)
  (local $7 i64)
  (local $8 i64)
  (local $9 i64)
  (local $10 i64)
  (local $11 i64)
  (local $12 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $12
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (set_local $6
   (i64.load align=1
    (i32.add
     (get_local $2)
     (i32.const 24)
    )
   )
  )
  (set_local $11
   (i64.load align=1
    (i32.add
     (get_local $0)
     (i32.const 24)
    )
   )
  )
  (set_local $7
   (i64.load offset=16 align=1
    (get_local $2)
   )
  )
  (set_local $8
   (i64.load offset=32 align=1
    (get_local $2)
   )
  )
  (set_local $9
   (i64.load offset=16 align=1
    (get_local $0)
   )
  )
  (set_local $10
   (i64.load offset=32 align=1
    (get_local $0)
   )
  )
  (call $prints
   (i32.const 224)
  )
  (call $_ZN3eos5printIPKcJNS_5tokenIyLy3163215788274352128EEES2_NS_5priceIS4_NS3_IyLy2118137375447056384EEEEES2_EEEvT_DpT0_
   (i32.const 240)
   (get_local $10)
   (i32.const 256)
   (get_local $9)
   (get_local $11)
   (i32.const 272)
  )
  (call $prints
   (i32.const 288)
  )
  (call $_ZN3eos5printIPKcJNS_5tokenIyLy2118137375447056384EEES2_NS_5priceINS3_IyLy3163215788274352128EEES4_EES2_EEEvT_DpT0_
   (i32.const 240)
   (get_local $8)
   (i32.const 256)
   (get_local $7)
   (get_local $6)
   (i32.const 272)
  )
  (call $prints
   (i32.const 304)
  )
  (i64.store offset=8
   (get_local $12)
   (tee_local $11
    (call $_ZN3eosmlERKNS_5tokenIyLy2118137375447056384EEERKNS_5priceINS0_IyLy3163215788274352128EEES1_EE
     (tee_local $4
      (i32.add
       (get_local $2)
       (i32.const 32)
      )
     )
     (tee_local $5
      (i32.add
       (get_local $2)
       (i32.const 16)
      )
     )
    )
   )
  )
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i64.ne
      (get_local $11)
      (tee_local $6
       (i64.load
        (select
         (i32.add
          (get_local $12)
          (i32.const 8)
         )
         (i32.add
          (get_local $0)
          (i32.const 32)
         )
         (i64.lt_u
          (get_local $11)
          (i64.load offset=32
           (get_local $0)
          )
         )
        )
       )
      )
     )
    )
    (set_local $11
     (i64.load
      (get_local $4)
     )
    )
    (br $label$0)
   )
   (set_local $11
    (call $_ZN3eosdvENS_5tokenIyLy3163215788274352128EEERKNS_5priceIS1_NS0_IyLy2118137375447056384EEEEE
     (get_local $6)
     (get_local $5)
    )
   )
  )
  (set_local $7
   (i64.load offset=8 align=1
    (get_local $2)
   )
  )
  (set_local $8
   (i64.load align=1
    (get_local $2)
   )
  )
  (set_local $9
   (i64.load offset=8 align=1
    (get_local $0)
   )
  )
  (set_local $10
   (i64.load align=1
    (get_local $0)
   )
  )
  (call $prints
   (i32.const 320)
  )
  (call $printn
   (get_local $10)
  )
  (call $prints
   (i32.const 336)
  )
  (call $printi
   (get_local $9)
  )
  (call $prints
   (i32.const 352)
  )
  (call $printn
   (get_local $8)
  )
  (call $prints
   (i32.const 336)
  )
  (call $printi
   (get_local $7)
  )
  (call $prints
   (i32.const 368)
  )
  (call $assert
   (i64.ge_u
    (i64.load
     (tee_local $0
      (i32.add
       (get_local $0)
       (i32.const 32)
      )
     )
    )
    (get_local $6)
   )
   (i32.const 112)
  )
  (i64.store
   (get_local $0)
   (i64.sub
    (i64.load
     (get_local $0)
    )
    (get_local $6)
   )
  )
  (call $assert
   (i64.ge_u
    (i64.add
     (i64.load offset=8
      (get_local $3)
     )
     (get_local $6)
    )
    (get_local $6)
   )
   (i32.const 32)
  )
  (i64.store offset=8
   (get_local $3)
   (i64.add
    (i64.load offset=8
     (get_local $3)
    )
    (get_local $6)
   )
  )
  (call $assert
   (i64.ge_u
    (i64.load
     (tee_local $0
      (i32.add
       (get_local $2)
       (i32.const 32)
      )
     )
    )
    (get_local $11)
   )
   (i32.const 112)
  )
  (i64.store
   (get_local $0)
   (i64.sub
    (i64.load
     (get_local $0)
    )
    (get_local $11)
   )
  )
  (call $assert
   (i64.ge_u
    (i64.add
     (i64.load offset=16
      (get_local $1)
     )
     (get_local $11)
    )
    (get_local $11)
   )
   (i32.const 32)
  )
  (i64.store offset=16
   (get_local $1)
   (i64.add
    (i64.load offset=16
     (get_local $1)
    )
    (get_local $11)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $12)
    (i32.const 16)
   )
  )
 )
 (func $_ZN3eos5printIPKcJNS_5tokenIyLy3163215788274352128EEES2_NS_5priceIS4_NS3_IyLy2118137375447056384EEEEES2_EEEvT_DpT0_ (param $0 i32) (param $1 i64) (param $2 i32) (param $3 i64) (param $4 i64) (param $5 i32)
  (local $6 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $6
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (call $prints
   (get_local $0)
  )
  (call $printi
   (get_local $1)
  )
  (call $prints
   (i32.const 496)
  )
  (call $printn
   (i64.const 3163215788274352128)
  )
  (call $prints
   (get_local $2)
  )
  (i64.store offset=8
   (get_local $6)
   (get_local $4)
  )
  (i64.store
   (get_local $6)
   (get_local $3)
  )
  (call $printi128
   (get_local $6)
  )
  (call $prints
   (i32.const 544)
  )
  (call $prints
   (i32.const 496)
  )
  (call $printn
   (i64.const 3163215788274352128)
  )
  (call $prints
   (i32.const 560)
  )
  (call $printn
   (i64.const 2118137375447056384)
  )
  (call $prints
   (get_local $5)
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $6)
    (i32.const 16)
   )
  )
 )
 (func $_ZN3eos5printIPKcJNS_5tokenIyLy2118137375447056384EEES2_NS_5priceINS3_IyLy3163215788274352128EEES4_EES2_EEEvT_DpT0_ (param $0 i32) (param $1 i64) (param $2 i32) (param $3 i64) (param $4 i64) (param $5 i32)
  (local $6 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $6
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (call $prints
   (get_local $0)
  )
  (call $printi
   (get_local $1)
  )
  (call $prints
   (i32.const 496)
  )
  (call $printn
   (i64.const 2118137375447056384)
  )
  (call $prints
   (get_local $2)
  )
  (i64.store offset=8
   (get_local $6)
   (get_local $4)
  )
  (i64.store
   (get_local $6)
   (get_local $3)
  )
  (call $printi128
   (get_local $6)
  )
  (call $prints
   (i32.const 544)
  )
  (call $prints
   (i32.const 496)
  )
  (call $printn
   (i64.const 3163215788274352128)
  )
  (call $prints
   (i32.const 560)
  )
  (call $printn
   (i64.const 2118137375447056384)
  )
  (call $prints
   (get_local $5)
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $6)
    (i32.const 16)
   )
  )
 )
 (func $_ZN3eosmlERKNS_5tokenIyLy2118137375447056384EEERKNS_5priceINS0_IyLy3163215788274352128EEES1_EE (param $0 i32) (param $1 i32) (result i64)
  (local $2 i64)
  (local $3 i64)
  (local $4 i64)
  (local $5 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $5
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 32)
    )
   )
  )
  (set_local $2
   (i64.load
    (get_local $0)
   )
  )
  (call $prints
   (i32.const 480)
  )
  (call $printi
   (get_local $2)
  )
  (call $prints
   (i32.const 496)
  )
  (call $printn
   (i64.const 2118137375447056384)
  )
  (call $prints
   (i32.const 512)
  )
  (set_local $2
   (i64.load
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
   )
  )
  (set_local $3
   (i64.load
    (get_local $1)
   )
  )
  (set_local $4
   (i64.load
    (get_local $0)
   )
  )
  (call $prints
   (i32.const 528)
  )
  (i64.store offset=24
   (get_local $5)
   (i64.const 0)
  )
  (i64.store offset=16
   (get_local $5)
   (get_local $4)
  )
  (call $printi128
   (i32.add
    (get_local $5)
    (i32.const 16)
   )
  )
  (call $prints
   (i32.const 400)
  )
  (i64.store offset=24
   (get_local $5)
   (get_local $2)
  )
  (i64.store offset=16
   (get_local $5)
   (get_local $3)
  )
  (call $printi128
   (i32.add
    (get_local $5)
    (i32.const 16)
   )
  )
  (call $prints
   (i32.const 416)
  )
  (call $printi
   (i64.const 1000000000000000)
  )
  (call $prints
   (i32.const 304)
  )
  (set_local $2
   (i64.load
    (get_local $0)
   )
  )
  (i64.store offset=24
   (get_local $5)
   (i64.const 0)
  )
  (i64.store offset=16
   (get_local $5)
   (get_local $2)
  )
  (call $multeq_i128
   (i32.add
    (get_local $5)
    (i32.const 16)
   )
   (get_local $1)
  )
  (set_local $2
   (i64.load offset=16
    (get_local $5)
   )
  )
  (set_local $3
   (i64.load offset=24
    (get_local $5)
   )
  )
  (i64.store offset=8
   (get_local $5)
   (i64.const 0)
  )
  (i64.store
   (get_local $5)
   (i64.const 1000000000000000)
  )
  (i64.store offset=24
   (get_local $5)
   (get_local $3)
  )
  (i64.store offset=16
   (get_local $5)
   (get_local $2)
  )
  (call $diveq_i128
   (i32.add
    (get_local $5)
    (i32.const 16)
   )
   (get_local $5)
  )
  (set_local $2
   (i64.load offset=16
    (get_local $5)
   )
  )
  (call $assert
   (i64.eqz
    (i64.load offset=24
     (get_local $5)
    )
   )
   (i32.const 432)
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $5)
    (i32.const 32)
   )
  )
  (get_local $2)
 )
 (func $_ZN3eosdvENS_5tokenIyLy3163215788274352128EEERKNS_5priceIS1_NS0_IyLy2118137375447056384EEEEE (param $0 i64) (param $1 i32) (result i64)
  (local $2 i64)
  (local $3 i64)
  (local $4 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $4
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 32)
    )
   )
  )
  (set_local $2
   (i64.load
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
   )
  )
  (set_local $3
   (i64.load
    (get_local $1)
   )
  )
  (call $prints
   (i32.const 384)
  )
  (i64.store offset=24
   (get_local $4)
   (i64.const 0)
  )
  (i64.store offset=16
   (get_local $4)
   (get_local $0)
  )
  (call $printi128
   (i32.add
    (get_local $4)
    (i32.const 16)
   )
  )
  (call $prints
   (i32.const 400)
  )
  (i64.store offset=24
   (get_local $4)
   (i64.const 0)
  )
  (i64.store offset=16
   (get_local $4)
   (i64.const 1000000000000000)
  )
  (call $printi128
   (i32.add
    (get_local $4)
    (i32.const 16)
   )
  )
  (call $prints
   (i32.const 416)
  )
  (i64.store offset=24
   (get_local $4)
   (get_local $2)
  )
  (i64.store offset=16
   (get_local $4)
   (get_local $3)
  )
  (call $printi128
   (i32.add
    (get_local $4)
    (i32.const 16)
   )
  )
  (call $prints
   (i32.const 304)
  )
  (i64.store offset=8
   (get_local $4)
   (i64.const 0)
  )
  (i64.store
   (get_local $4)
   (i64.const 1000000000000000)
  )
  (i64.store offset=24
   (get_local $4)
   (i64.const 0)
  )
  (i64.store offset=16
   (get_local $4)
   (get_local $0)
  )
  (call $multeq_i128
   (i32.add
    (get_local $4)
    (i32.const 16)
   )
   (get_local $4)
  )
  (set_local $0
   (i64.load offset=16
    (get_local $4)
   )
  )
  (i64.store offset=24
   (get_local $4)
   (i64.load offset=24
    (get_local $4)
   )
  )
  (i64.store offset=16
   (get_local $4)
   (get_local $0)
  )
  (call $diveq_i128
   (i32.add
    (get_local $4)
    (i32.const 16)
   )
   (get_local $1)
  )
  (set_local $0
   (i64.load offset=16
    (get_local $4)
   )
  )
  (call $assert
   (i64.eqz
    (i64.load offset=24
     (get_local $4)
    )
   )
   (i32.const 432)
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $4)
    (i32.const 32)
   )
  )
  (get_local $0)
 )
 (func $_ZN8exchange18apply_exchange_buyENS_8BuyOrderE (param $0 i32)
  (local $1 i64)
  (local $2 i64)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (local $11 i32)
  (local $12 i32)
  (local $13 i64)
  (local $14 i64)
  (local $15 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $15
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 192)
    )
   )
  )
  (call $requireAuth
   (tee_local $13
    (i64.load align=1
     (get_local $0)
    )
   )
  )
  (call $assert
   (i64.ne
    (tee_local $14
     (i64.load offset=32
      (get_local $0)
     )
    )
    (i64.const 0)
   )
   (i32.const 576)
  )
  (call $assert
   (i32.gt_u
    (i32.load offset=40 align=1
     (get_local $0)
    )
    (call $now)
   )
   (i32.const 608)
  )
  (set_local $1
   (i64.load align=1
    (tee_local $7
     (i32.add
      (get_local $0)
      (i32.const 24)
     )
    )
   )
  )
  (set_local $2
   (i64.load offset=16 align=1
    (get_local $0)
   )
  )
  (call $printn
   (get_local $13)
  )
  (call $_ZN3eos5printIPKcJNS_5tokenIyLy3163215788274352128EEES2_NS_5priceIS4_NS3_IyLy2118137375447056384EEEEES2_EEEvT_DpT0_
   (i32.const 624)
   (get_local $14)
   (i32.const 656)
   (get_local $2)
   (get_local $1)
   (i32.const 304)
  )
  (i64.store
   (i32.add
    (i32.add
     (get_local $15)
     (i32.const 144)
    )
    (i32.const 24)
   )
   (i64.const 0)
  )
  (i32.store
   (i32.add
    (i32.add
     (get_local $15)
     (i32.const 144)
    )
    (i32.const 12)
   )
   (i32.load
    (i32.add
     (get_local $0)
     (i32.const 12)
    )
   )
  )
  (i32.store
   (i32.add
    (i32.add
     (get_local $15)
     (i32.const 144)
    )
    (i32.const 8)
   )
   (i32.load
    (i32.add
     (get_local $0)
     (i32.const 8)
    )
   )
  )
  (i64.store offset=160
   (get_local $15)
   (i64.const 1)
  )
  (i64.store offset=176
   (get_local $15)
   (i64.const 0)
  )
  (i32.store offset=148
   (get_local $15)
   (i32.load
    (i32.add
     (get_local $0)
     (i32.const 4)
    )
   )
  )
  (i32.store offset=144
   (get_local $15)
   (i32.load
    (get_local $0)
   )
  )
  (call $assert
   (i32.ne
    (call $load_primary_i128i128
     (i64.const 3316479707209269248)
     (i64.const 3316479707209269248)
     (i64.const 1317637142540713984)
     (i32.add
      (get_local $15)
      (i32.const 144)
     )
     (i32.const 44)
    )
    (i32.const 44)
   )
   (i32.const 688)
  )
  (call $prints
   (i32.const 736)
  )
  (call $printi
   (i64.const 141)
  )
  (call $prints
   (i32.const 304)
  )
  (i64.store offset=120
   (get_local $15)
   (i64.const 0)
  )
  (i64.store offset=112
   (get_local $15)
   (get_local $13)
  )
  (i64.store offset=128
   (get_local $15)
   (i64.const 0)
  )
  (i32.store offset=136
   (get_local $15)
   (i32.const 0)
  )
  (drop
   (call $load_i64
    (i64.const 3316479707209269248)
    (i64.const 3316479707209269248)
    (i64.const 632468476610478080)
    (i32.add
     (get_local $15)
     (i32.const 112)
    )
    (i32.const 28)
   )
  )
  (call $assert
   (i64.ge_u
    (i64.load offset=120
     (get_local $15)
    )
    (get_local $14)
   )
   (i32.const 112)
  )
  (i64.store offset=120
   (get_local $15)
   (i64.sub
    (i64.load offset=120
     (get_local $15)
    )
    (get_local $14)
   )
  )
  (i64.store
   (tee_local $9
    (i32.add
     (i32.add
      (get_local $15)
      (i32.const 64)
     )
     (i32.const 24)
    )
   )
   (i64.const 0)
  )
  (i64.store offset=80
   (get_local $15)
   (i64.const 1)
  )
  (i64.store offset=72
   (get_local $15)
   (i64.const 0)
  )
  (i64.store offset=64
   (get_local $15)
   (i64.const 0)
  )
  (i64.store offset=96
   (get_local $15)
   (i64.const 0)
  )
  (block $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (block $label$5
        (br_if $label$5
         (i32.ne
          (call $front_secondary_i128i128
           (i64.const 3316479707209269248)
           (i64.const 3316479707209269248)
           (i64.const 925261025006059520)
           (i32.add
            (get_local $15)
            (i32.const 64)
           )
           (i32.const 44)
          )
          (i32.const 44)
         )
        )
        (set_local $14
         (i64.load
          (get_local $9)
         )
        )
        (set_local $13
         (i64.load
          (tee_local $3
           (i32.add
            (i32.add
             (get_local $15)
             (i32.const 64)
            )
            (i32.const 16)
           )
          )
         )
        )
        (set_local $1
         (i64.load
          (tee_local $4
           (i32.add
            (i32.add
             (get_local $15)
             (i32.const 64)
            )
            (i32.const 32)
           )
          )
         )
        )
        (call $prints
         (i32.const 928)
        )
        (call $_ZN3eos5printIPKcJNS_5tokenIyLy2118137375447056384EEES2_NS_5priceINS3_IyLy3163215788274352128EEES4_EES2_EEEvT_DpT0_
         (i32.const 240)
         (get_local $1)
         (i32.const 256)
         (get_local $13)
         (get_local $14)
         (i32.const 272)
        )
        (call $prints
         (i32.const 304)
        )
        (set_local $14
         (i64.load align=1
          (get_local $7)
         )
        )
        (set_local $13
         (i64.load align=1
          (tee_local $5
           (i32.add
            (get_local $0)
            (i32.const 16)
           )
          )
         )
        )
        (set_local $1
         (i64.load align=1
          (tee_local $6
           (i32.add
            (get_local $0)
            (i32.const 32)
           )
          )
         )
        )
        (call $prints
         (i32.const 944)
        )
        (call $_ZN3eos5printIPKcJNS_5tokenIyLy3163215788274352128EEES2_NS_5priceIS4_NS3_IyLy2118137375447056384EEEEES2_EEEvT_DpT0_
         (i32.const 240)
         (get_local $1)
         (i32.const 256)
         (get_local $13)
         (get_local $14)
         (i32.const 272)
        )
        (call $prints
         (i32.const 304)
        )
        (i64.store offset=40
         (get_local $15)
         (i64.const 0)
        )
        (i64.store offset=48
         (get_local $15)
         (i64.const 0)
        )
        (i32.store offset=56
         (get_local $15)
         (i32.const 0)
        )
        (i64.store offset=32
         (get_local $15)
         (i64.load offset=64
          (get_local $15)
         )
        )
        (drop
         (call $load_i64
          (i64.const 3316479707209269248)
          (i64.const 3316479707209269248)
          (i64.const 632468476610478080)
          (i32.add
           (get_local $15)
           (i32.const 32)
          )
          (i32.const 28)
         )
        )
        (block $label$6
         (br_if $label$6
          (select
           (i64.gt_u
            (i64.load
             (get_local $3)
            )
            (i64.load
             (get_local $5)
            )
           )
           (i64.gt_u
            (tee_local $14
             (i64.load
              (get_local $9)
             )
            )
            (tee_local $13
             (i64.load
              (get_local $7)
             )
            )
           )
           (i64.eq
            (get_local $14)
            (get_local $13)
           )
          )
         )
         (set_local $7
          (i32.add
           (i32.add
            (get_local $15)
            (i32.const 32)
           )
           (i32.const 24)
          )
         )
         (set_local $9
          (i32.add
           (i32.add
            (get_local $15)
            (i32.const 32)
           )
           (i32.const 8)
          )
         )
         (set_local $10
          (i32.add
           (i32.add
            (get_local $15)
            (i32.const 32)
           )
           (i32.const 16)
          )
         )
         (loop $label$7
          (call $prints
           (i32.const 960)
          )
          (call $_ZN8exchange5matchERNS_3BidERNS_7AccountERNS_3AskES3_
           (get_local $0)
           (i32.add
            (get_local $15)
            (i32.const 112)
           )
           (i32.add
            (get_local $15)
            (i32.const 64)
           )
           (i32.add
            (get_local $15)
            (i32.const 32)
           )
          )
          (br_if $label$6
           (i64.ne
            (i64.load
             (get_local $4)
            )
            (i64.const 0)
           )
          )
          (i32.store
           (get_local $7)
           (tee_local $8
            (i32.add
             (i32.load
              (get_local $7)
             )
             (i32.const -1)
            )
           )
          )
          (block $label$8
           (block $label$9
            (br_if $label$9
             (i32.eqz
              (i32.or
               (i64.ne
                (i64.or
                 (i64.load
                  (get_local $10)
                 )
                 (i64.load
                  (get_local $9)
                 )
                )
                (i64.const 0)
               )
               (get_local $8)
              )
             )
            )
            (call $prints
             (i32.const 96)
            )
            (drop
             (call $store_i64
              (i64.const 3316479707209269248)
              (i64.const 632468476610478080)
              (i32.add
               (get_local $15)
               (i32.const 32)
              )
              (i32.const 28)
             )
            )
            (br $label$8)
           )
           (call $prints
            (i32.const 80)
           )
           (drop
            (call $remove_i64
             (i64.const 3316479707209269248)
             (i64.const 632468476610478080)
             (i32.add
              (get_local $15)
              (i32.const 32)
             )
            )
           )
          )
          (block $label$10
           (block $label$11
            (br_if $label$11
             (i32.eqz
              (i32.or
               (i64.ne
                (i64.or
                 (i64.load
                  (i32.add
                   (i32.add
                    (get_local $15)
                    (i32.const 112)
                   )
                   (i32.const 16)
                  )
                 )
                 (i64.load
                  (i32.add
                   (i32.add
                    (get_local $15)
                    (i32.const 112)
                   )
                   (i32.const 8)
                  )
                 )
                )
                (i64.const 0)
               )
               (i32.load
                (i32.add
                 (i32.add
                  (get_local $15)
                  (i32.const 112)
                 )
                 (i32.const 24)
                )
               )
              )
             )
            )
            (call $prints
             (i32.const 96)
            )
            (drop
             (call $store_i64
              (i64.const 3316479707209269248)
              (i64.const 632468476610478080)
              (i32.add
               (get_local $15)
               (i32.const 112)
              )
              (i32.const 28)
             )
            )
            (br $label$10)
           )
           (call $prints
            (i32.const 80)
           )
           (drop
            (call $remove_i64
             (i64.const 3316479707209269248)
             (i64.const 632468476610478080)
             (i32.add
              (get_local $15)
              (i32.const 112)
             )
            )
           )
          )
          (drop
           (call $remove_i128i128
            (i64.const 3316479707209269248)
            (i64.const 925261025006059520)
            (i32.add
             (get_local $15)
             (i32.const 64)
            )
           )
          )
          (br_if $label$6
           (i32.ne
            (call $front_secondary_i128i128
             (i64.const 3316479707209269248)
             (i64.const 3316479707209269248)
             (i64.const 925261025006059520)
             (i32.add
              (get_local $15)
              (i32.const 64)
             )
             (i32.const 44)
            )
            (i32.const 44)
           )
          )
          (i64.store
           (tee_local $8
            (i32.add
             (get_local $15)
             (i32.const 8)
            )
           )
           (i64.const 0)
          )
          (i64.store
           (tee_local $11
            (i32.add
             (get_local $15)
             (i32.const 16)
            )
           )
           (i64.const 0)
          )
          (i32.store
           (tee_local $12
            (i32.add
             (get_local $15)
             (i32.const 24)
            )
           )
           (i32.const 0)
          )
          (i64.store
           (get_local $15)
           (i64.load offset=64
            (get_local $15)
           )
          )
          (drop
           (call $load_i64
            (i64.const 3316479707209269248)
            (i64.const 3316479707209269248)
            (i64.const 632468476610478080)
            (get_local $15)
            (i32.const 28)
           )
          )
          (i32.store
           (get_local $7)
           (i32.load
            (get_local $12)
           )
          )
          (i64.store
           (get_local $10)
           (i64.load
            (get_local $11)
           )
          )
          (i64.store
           (get_local $9)
           (i64.load
            (get_local $8)
           )
          )
          (i64.store offset=32
           (get_local $15)
           (i64.load
            (get_local $15)
           )
          )
          (br_if $label$7
           (select
            (i64.le_u
             (i64.load
              (get_local $3)
             )
             (i64.load
              (get_local $5)
             )
            )
            (i64.le_u
             (tee_local $14
              (i64.load
               (i32.add
                (i32.add
                 (get_local $15)
                 (i32.const 64)
                )
                (i32.const 24)
               )
              )
             )
             (tee_local $13
              (i64.load
               (i32.add
                (get_local $0)
                (i32.const 24)
               )
              )
             )
            )
            (i64.eq
             (get_local $14)
             (get_local $13)
            )
           )
          )
         )
        )
        (call $prints
         (i32.const 992)
        )
        (block $label$12
         (br_if $label$12
          (i64.eqz
           (i64.load
            (get_local $6)
           )
          )
         )
         (br_if $label$12
          (i32.load8_u offset=44
           (get_local $0)
          )
         )
         (i32.store
          (tee_local $7
           (i32.add
            (get_local $15)
            (i32.const 136)
           )
          )
          (i32.add
           (i32.load
            (get_local $7)
           )
           (i32.const 1)
          )
         )
        )
        (br_if $label$4
         (i32.eqz
          (i32.or
           (i64.ne
            (i64.or
             (i64.load
              (i32.add
               (get_local $15)
               (i32.const 128)
              )
             )
             (i64.load
              (i32.add
               (get_local $15)
               (i32.const 120)
              )
             )
            )
            (i64.const 0)
           )
           (i32.load
            (i32.add
             (get_local $15)
             (i32.const 136)
            )
           )
          )
         )
        )
        (call $prints
         (i32.const 96)
        )
        (drop
         (call $store_i64
          (i64.const 3316479707209269248)
          (i64.const 632468476610478080)
          (i32.add
           (get_local $15)
           (i32.const 112)
          )
          (i32.const 28)
         )
        )
        (br $label$3)
       )
       (call $prints
        (i32.const 800)
       )
       (call $assert
        (i32.eqz
         (i32.load8_u offset=44
          (get_local $0)
         )
        )
        (i32.const 864)
       )
       (call $assert
        (call $store_i128i128
         (i64.const 3316479707209269248)
         (i64.const 1317637142540713984)
         (get_local $0)
         (i32.const 44)
        )
        (i32.const 896)
       )
       (i32.store
        (tee_local $0
         (i32.add
          (i32.add
           (get_local $15)
           (i32.const 112)
          )
          (i32.const 24)
         )
        )
        (tee_local $0
         (i32.add
          (i32.load
           (get_local $0)
          )
          (i32.const 1)
         )
        )
       )
       (br_if $label$2
        (i32.eqz
         (i32.or
          (i64.ne
           (i64.or
            (i64.load
             (i32.add
              (get_local $15)
              (i32.const 128)
             )
            )
            (i64.load
             (i32.add
              (i32.add
               (get_local $15)
               (i32.const 112)
              )
              (i32.const 8)
             )
            )
           )
           (i64.const 0)
          )
          (get_local $0)
         )
        )
       )
       (call $prints
        (i32.const 96)
       )
       (drop
        (call $store_i64
         (i64.const 3316479707209269248)
         (i64.const 632468476610478080)
         (i32.add
          (get_local $15)
          (i32.const 112)
         )
         (i32.const 28)
        )
       )
       (br $label$0)
      )
      (call $prints
       (i32.const 80)
      )
      (drop
       (call $remove_i64
        (i64.const 3316479707209269248)
        (i64.const 632468476610478080)
        (i32.add
         (get_local $15)
         (i32.const 112)
        )
       )
      )
     )
     (call $prints
      (i32.const 1056)
     )
     (br_if $label$1
      (i64.eqz
       (tee_local $14
        (i64.load
         (i32.add
          (get_local $0)
          (i32.const 32)
         )
        )
       )
      )
     )
     (call $printi
      (get_local $14)
     )
     (call $prints
      (i32.const 496)
     )
     (call $printn
      (i64.const 3163215788274352128)
     )
     (call $prints
      (i32.const 1088)
     )
     (call $assert
      (i32.eqz
       (i32.load8_u offset=44
        (get_local $0)
       )
      )
      (i32.const 864)
     )
     (call $assert
      (call $store_i128i128
       (i64.const 3316479707209269248)
       (i64.const 1317637142540713984)
       (get_local $0)
       (i32.const 44)
      )
      (i32.const 896)
     )
     (br $label$0)
    )
    (call $prints
     (i32.const 80)
    )
    (drop
     (call $remove_i64
      (i64.const 3316479707209269248)
      (i64.const 632468476610478080)
      (i32.add
       (get_local $15)
       (i32.const 112)
      )
     )
    )
    (br $label$0)
   )
   (call $prints
    (i32.const 1104)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $15)
    (i32.const 192)
   )
  )
 )
 (func $_ZN8exchange19apply_exchange_sellENS_9SellOrderE (param $0 i32)
  (local $1 i64)
  (local $2 i64)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (local $11 i32)
  (local $12 i32)
  (local $13 i32)
  (local $14 i64)
  (local $15 i64)
  (local $16 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $16
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 192)
    )
   )
  )
  (call $requireAuth
   (tee_local $14
    (i64.load align=1
     (get_local $0)
    )
   )
  )
  (call $assert
   (i64.ne
    (tee_local $15
     (i64.load offset=32
      (get_local $0)
     )
    )
    (i64.const 0)
   )
   (i32.const 576)
  )
  (call $assert
   (i32.gt_u
    (i32.load offset=40 align=1
     (get_local $0)
    )
    (call $now)
   )
   (i32.const 608)
  )
  (set_local $1
   (i64.load align=1
    (tee_local $6
     (i32.add
      (get_local $0)
      (i32.const 24)
     )
    )
   )
  )
  (set_local $2
   (i64.load offset=16 align=1
    (get_local $0)
   )
  )
  (call $prints
   (i32.const 368)
  )
  (call $printn
   (get_local $14)
  )
  (call $_ZN3eos5printIPKcJNS_5tokenIyLy2118137375447056384EEES2_NS_5priceINS3_IyLy3163215788274352128EEES4_EES2_EEEvT_DpT0_
   (i32.const 1120)
   (get_local $15)
   (i32.const 656)
   (get_local $2)
   (get_local $1)
   (i32.const 304)
  )
  (i64.store
   (i32.add
    (i32.add
     (get_local $16)
     (i32.const 144)
    )
    (i32.const 24)
   )
   (i64.const 0)
  )
  (i32.store
   (i32.add
    (i32.add
     (get_local $16)
     (i32.const 144)
    )
    (i32.const 12)
   )
   (i32.load
    (i32.add
     (get_local $0)
     (i32.const 12)
    )
   )
  )
  (i32.store
   (i32.add
    (i32.add
     (get_local $16)
     (i32.const 144)
    )
    (i32.const 8)
   )
   (i32.load
    (i32.add
     (get_local $0)
     (i32.const 8)
    )
   )
  )
  (i64.store offset=160
   (get_local $16)
   (i64.const 1)
  )
  (i64.store offset=176
   (get_local $16)
   (i64.const 0)
  )
  (i32.store offset=148
   (get_local $16)
   (i32.load
    (i32.add
     (get_local $0)
     (i32.const 4)
    )
   )
  )
  (i32.store offset=144
   (get_local $16)
   (i32.load
    (get_local $0)
   )
  )
  (call $assert
   (i32.ne
    (call $load_primary_i128i128
     (i64.const 3316479707209269248)
     (i64.const 3316479707209269248)
     (i64.const 925261025006059520)
     (i32.add
      (get_local $16)
      (i32.const 144)
     )
     (i32.const 44)
    )
    (i32.const 44)
   )
   (i32.const 688)
  )
  (i64.store offset=120
   (get_local $16)
   (i64.const 0)
  )
  (i64.store offset=112
   (get_local $16)
   (get_local $14)
  )
  (i64.store offset=128
   (get_local $16)
   (i64.const 0)
  )
  (i32.store offset=136
   (get_local $16)
   (i32.const 0)
  )
  (drop
   (call $load_i64
    (i64.const 3316479707209269248)
    (i64.const 3316479707209269248)
    (i64.const 632468476610478080)
    (i32.add
     (get_local $16)
     (i32.const 112)
    )
    (i32.const 28)
   )
  )
  (call $assert
   (i64.ge_u
    (i64.load offset=128
     (get_local $16)
    )
    (get_local $15)
   )
   (i32.const 112)
  )
  (i64.store offset=128
   (get_local $16)
   (i64.sub
    (i64.load offset=128
     (get_local $16)
    )
    (get_local $15)
   )
  )
  (i64.store
   (tee_local $10
    (i32.add
     (i32.add
      (get_local $16)
      (i32.const 64)
     )
     (i32.const 24)
    )
   )
   (i64.const 0)
  )
  (i64.store offset=80
   (get_local $16)
   (i64.const 1)
  )
  (i64.store offset=72
   (get_local $16)
   (i64.const 0)
  )
  (i64.store offset=64
   (get_local $16)
   (i64.const 0)
  )
  (i64.store offset=96
   (get_local $16)
   (i64.const 0)
  )
  (block $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (block $label$5
        (br_if $label$5
         (i32.ne
          (call $back_secondary_i128i128
           (i64.const 3316479707209269248)
           (i64.const 3316479707209269248)
           (i64.const 1317637142540713984)
           (i32.add
            (get_local $16)
            (i32.const 64)
           )
           (i32.const 44)
          )
          (i32.const 44)
         )
        )
        (call $prints
         (i32.const 1216)
        )
        (i64.store offset=40
         (get_local $16)
         (i64.const 0)
        )
        (i64.store offset=48
         (get_local $16)
         (i64.const 0)
        )
        (i32.store offset=56
         (get_local $16)
         (i32.const 0)
        )
        (i64.store offset=32
         (get_local $16)
         (i64.load offset=64
          (get_local $16)
         )
        )
        (drop
         (call $load_i64
          (i64.const 3316479707209269248)
          (i64.const 3316479707209269248)
          (i64.const 632468476610478080)
          (i32.add
           (get_local $16)
           (i32.const 32)
          )
          (i32.const 28)
         )
        )
        (block $label$6
         (br_if $label$6
          (select
           (i64.lt_u
            (i64.load
             (tee_local $4
              (i32.add
               (i32.add
                (get_local $16)
                (i32.const 64)
               )
               (i32.const 16)
              )
             )
            )
            (i64.load
             (tee_local $3
              (i32.add
               (get_local $0)
               (i32.const 16)
              )
             )
            )
           )
           (i64.lt_u
            (tee_local $15
             (i64.load
              (get_local $10)
             )
            )
            (tee_local $14
             (i64.load
              (get_local $6)
             )
            )
           )
           (i64.eq
            (get_local $15)
            (get_local $14)
           )
          )
         )
         (set_local $5
          (i32.add
           (get_local $16)
           (i32.const 96)
          )
         )
         (set_local $7
          (i32.add
           (i32.add
            (get_local $16)
            (i32.const 112)
           )
           (i32.const 8)
          )
         )
         (set_local $8
          (i32.add
           (i32.add
            (get_local $16)
            (i32.const 112)
           )
           (i32.const 16)
          )
         )
         (loop $label$7
          (call $_ZN8exchange5matchERNS_3BidERNS_7AccountERNS_3AskES3_
           (i32.add
            (get_local $16)
            (i32.const 64)
           )
           (i32.add
            (get_local $16)
            (i32.const 32)
           )
           (get_local $0)
           (i32.add
            (get_local $16)
            (i32.const 112)
           )
          )
          (br_if $label$6
           (i64.ne
            (i64.load
             (get_local $5)
            )
            (i64.const 0)
           )
          )
          (i32.store
           (tee_local $6
            (i32.add
             (i32.add
              (get_local $16)
              (i32.const 32)
             )
             (i32.const 24)
            )
           )
           (i32.add
            (i32.load
             (get_local $6)
            )
            (i32.const -1)
           )
          )
          (block $label$8
           (block $label$9
            (br_if $label$9
             (i32.eqz
              (i32.or
               (i64.ne
                (i64.or
                 (i64.load
                  (get_local $8)
                 )
                 (i64.load
                  (get_local $7)
                 )
                )
                (i64.const 0)
               )
               (i32.load
                (i32.add
                 (i32.add
                  (get_local $16)
                  (i32.const 112)
                 )
                 (i32.const 24)
                )
               )
              )
             )
            )
            (call $prints
             (i32.const 96)
            )
            (drop
             (call $store_i64
              (i64.const 3316479707209269248)
              (i64.const 632468476610478080)
              (i32.add
               (get_local $16)
               (i32.const 112)
              )
              (i32.const 28)
             )
            )
            (br $label$8)
           )
           (call $prints
            (i32.const 80)
           )
           (drop
            (call $remove_i64
             (i64.const 3316479707209269248)
             (i64.const 632468476610478080)
             (i32.add
              (get_local $16)
              (i32.const 112)
             )
            )
           )
          )
          (block $label$10
           (block $label$11
            (br_if $label$11
             (i32.eqz
              (i32.or
               (i64.ne
                (i64.or
                 (i64.load
                  (tee_local $10
                   (i32.add
                    (i32.add
                     (get_local $16)
                     (i32.const 32)
                    )
                    (i32.const 16)
                   )
                  )
                 )
                 (i64.load
                  (tee_local $9
                   (i32.add
                    (i32.add
                     (get_local $16)
                     (i32.const 32)
                    )
                    (i32.const 8)
                   )
                  )
                 )
                )
                (i64.const 0)
               )
               (i32.load
                (get_local $6)
               )
              )
             )
            )
            (call $prints
             (i32.const 96)
            )
            (drop
             (call $store_i64
              (i64.const 3316479707209269248)
              (i64.const 632468476610478080)
              (i32.add
               (get_local $16)
               (i32.const 32)
              )
              (i32.const 28)
             )
            )
            (br $label$10)
           )
           (call $prints
            (i32.const 80)
           )
           (drop
            (call $remove_i64
             (i64.const 3316479707209269248)
             (i64.const 632468476610478080)
             (i32.add
              (get_local $16)
              (i32.const 32)
             )
            )
           )
          )
          (drop
           (call $remove_i128i128
            (i64.const 3316479707209269248)
            (i64.const 1317637142540713984)
            (i32.add
             (get_local $16)
             (i32.const 64)
            )
           )
          )
          (br_if $label$6
           (i32.ne
            (call $back_secondary_i128i128
             (i64.const 3316479707209269248)
             (i64.const 3316479707209269248)
             (i64.const 1317637142540713984)
             (i32.add
              (get_local $16)
              (i32.const 64)
             )
             (i32.const 44)
            )
            (i32.const 44)
           )
          )
          (i64.store
           (tee_local $11
            (i32.add
             (get_local $16)
             (i32.const 8)
            )
           )
           (i64.const 0)
          )
          (i64.store
           (tee_local $12
            (i32.add
             (get_local $16)
             (i32.const 16)
            )
           )
           (i64.const 0)
          )
          (i32.store
           (tee_local $13
            (i32.add
             (get_local $16)
             (i32.const 24)
            )
           )
           (i32.const 0)
          )
          (i64.store
           (get_local $16)
           (i64.load offset=64
            (get_local $16)
           )
          )
          (drop
           (call $load_i64
            (i64.const 3316479707209269248)
            (i64.const 3316479707209269248)
            (i64.const 632468476610478080)
            (get_local $16)
            (i32.const 28)
           )
          )
          (i32.store
           (get_local $6)
           (i32.load
            (get_local $13)
           )
          )
          (i64.store
           (get_local $10)
           (i64.load
            (get_local $12)
           )
          )
          (i64.store
           (get_local $9)
           (i64.load
            (get_local $11)
           )
          )
          (i64.store offset=32
           (get_local $16)
           (i64.load
            (get_local $16)
           )
          )
          (br_if $label$7
           (select
            (i64.ge_u
             (i64.load
              (get_local $4)
             )
             (i64.load
              (get_local $3)
             )
            )
            (i64.ge_u
             (tee_local $15
              (i64.load
               (i32.add
                (i32.add
                 (get_local $16)
                 (i32.const 64)
                )
                (i32.const 24)
               )
              )
             )
             (tee_local $14
              (i64.load
               (i32.add
                (get_local $0)
                (i32.const 24)
               )
              )
             )
            )
            (i64.eq
             (get_local $15)
             (get_local $14)
            )
           )
          )
         )
        )
        (block $label$12
         (br_if $label$12
          (i64.eqz
           (i64.load
            (i32.add
             (get_local $0)
             (i32.const 32)
            )
           )
          )
         )
         (br_if $label$12
          (i32.load8_u offset=44
           (get_local $0)
          )
         )
         (i32.store
          (tee_local $6
           (i32.add
            (get_local $16)
            (i32.const 136)
           )
          )
          (i32.add
           (i32.load
            (get_local $6)
           )
           (i32.const 1)
          )
         )
        )
        (br_if $label$4
         (i32.eqz
          (i32.or
           (i64.ne
            (i64.or
             (i64.load
              (i32.add
               (get_local $16)
               (i32.const 128)
              )
             )
             (i64.load
              (i32.add
               (get_local $16)
               (i32.const 120)
              )
             )
            )
            (i64.const 0)
           )
           (i32.load
            (i32.add
             (get_local $16)
             (i32.const 136)
            )
           )
          )
         )
        )
        (call $prints
         (i32.const 96)
        )
        (drop
         (call $store_i64
          (i64.const 3316479707209269248)
          (i64.const 632468476610478080)
          (i32.add
           (get_local $16)
           (i32.const 112)
          )
          (i32.const 28)
         )
        )
        (br $label$3)
       )
       (call $assert
        (i32.eqz
         (i32.load8_u offset=44
          (get_local $0)
         )
        )
        (i32.const 864)
       )
       (call $prints
        (i32.const 1152)
       )
       (call $assert
        (call $store_i128i128
         (i64.const 3316479707209269248)
         (i64.const 925261025006059520)
         (get_local $0)
         (i32.const 44)
        )
        (i32.const 896)
       )
       (i32.store
        (tee_local $0
         (i32.add
          (i32.add
           (get_local $16)
           (i32.const 112)
          )
          (i32.const 24)
         )
        )
        (tee_local $0
         (i32.add
          (i32.load
           (get_local $0)
          )
          (i32.const 1)
         )
        )
       )
       (br_if $label$2
        (i32.eqz
         (i32.or
          (i64.ne
           (i64.or
            (i64.load
             (i32.add
              (get_local $16)
              (i32.const 128)
             )
            )
            (i64.load
             (i32.add
              (i32.add
               (get_local $16)
               (i32.const 112)
              )
              (i32.const 8)
             )
            )
           )
           (i64.const 0)
          )
          (get_local $0)
         )
        )
       )
       (call $prints
        (i32.const 96)
       )
       (drop
        (call $store_i64
         (i64.const 3316479707209269248)
         (i64.const 632468476610478080)
         (i32.add
          (get_local $16)
          (i32.const 112)
         )
         (i32.const 28)
        )
       )
       (br $label$0)
      )
      (call $prints
       (i32.const 80)
      )
      (drop
       (call $remove_i64
        (i64.const 3316479707209269248)
        (i64.const 632468476610478080)
        (i32.add
         (get_local $16)
         (i32.const 112)
        )
       )
      )
     )
     (br_if $label$1
      (i64.eqz
       (i64.load
        (i32.add
         (get_local $0)
         (i32.const 32)
        )
       )
      )
     )
     (call $assert
      (i32.eqz
       (i32.load8_u offset=44
        (get_local $0)
       )
      )
      (i32.const 864)
     )
     (call $prints
      (i32.const 1264)
     )
     (call $assert
      (call $store_i128i128
       (i64.const 3316479707209269248)
       (i64.const 925261025006059520)
       (get_local $0)
       (i32.const 44)
      )
      (i32.const 896)
     )
     (br $label$0)
    )
    (call $prints
     (i32.const 80)
    )
    (drop
     (call $remove_i64
      (i64.const 3316479707209269248)
      (i64.const 632468476610478080)
      (i32.add
       (get_local $16)
       (i32.const 112)
      )
     )
    )
    (br $label$0)
   )
   (call $prints
    (i32.const 1280)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $16)
    (i32.const 192)
   )
  )
 )
 (func $_ZN8exchange25apply_exchange_cancel_buyENS_7OrderIDE (param $0 i32)
  (local $1 i64)
  (local $2 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $2
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 80)
    )
   )
  )
  (call $requireAuth
   (tee_local $1
    (i64.load
     (get_local $0)
    )
   )
  )
  (i64.store
   (i32.add
    (get_local $2)
    (i32.const 56)
   )
   (i64.const 0)
  )
  (i32.store
   (i32.add
    (i32.add
     (get_local $2)
     (i32.const 32)
    )
    (i32.const 12)
   )
   (i32.load
    (i32.add
     (get_local $0)
     (i32.const 12)
    )
   )
  )
  (i32.store
   (i32.add
    (i32.add
     (get_local $2)
     (i32.const 32)
    )
    (i32.const 8)
   )
   (i32.load
    (i32.add
     (get_local $0)
     (i32.const 8)
    )
   )
  )
  (i64.store offset=48
   (get_local $2)
   (i64.const 1)
  )
  (i64.store offset=64
   (get_local $2)
   (i64.const 0)
  )
  (i32.store offset=36
   (get_local $2)
   (i32.load
    (i32.add
     (get_local $0)
     (i32.const 4)
    )
   )
  )
  (i32.store offset=32
   (get_local $2)
   (i32.load
    (get_local $0)
   )
  )
  (call $assert
   (i32.eq
    (call $load_primary_i128i128
     (i64.const 3316479707209269248)
     (i64.const 3316479707209269248)
     (i64.const 1317637142540713984)
     (i32.add
      (get_local $2)
      (i32.const 32)
     )
     (i32.const 44)
    )
    (i32.const 44)
   )
   (i32.const 1296)
  )
  (i64.store offset=8
   (get_local $2)
   (i64.const 0)
  )
  (i64.store
   (get_local $2)
   (get_local $1)
  )
  (i64.store offset=16
   (get_local $2)
   (i64.const 0)
  )
  (i32.store offset=24
   (get_local $2)
   (i32.const 0)
  )
  (drop
   (call $load_i64
    (i64.const 3316479707209269248)
    (i64.const 3316479707209269248)
    (i64.const 632468476610478080)
    (get_local $2)
    (i32.const 28)
   )
  )
  (call $assert
   (i64.ge_u
    (i64.add
     (tee_local $1
      (i64.load offset=64
       (get_local $2)
      )
     )
     (i64.load offset=8
      (get_local $2)
     )
    )
    (get_local $1)
   )
   (i32.const 32)
  )
  (i64.store offset=8
   (get_local $2)
   (i64.add
    (i64.load offset=8
     (get_local $2)
    )
    (i64.load offset=64
     (get_local $2)
    )
   )
  )
  (i32.store offset=24
   (get_local $2)
   (i32.add
    (i32.load offset=24
     (get_local $2)
    )
    (i32.const -1)
   )
  )
  (drop
   (call $remove_i128i128
    (i64.const 3316479707209269248)
    (i64.const 1317637142540713984)
    (i32.add
     (get_local $2)
     (i32.const 32)
    )
   )
  )
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.eqz
      (i32.or
       (i64.ne
        (i64.or
         (i64.load offset=16
          (get_local $2)
         )
         (i64.load offset=8
          (get_local $2)
         )
        )
        (i64.const 0)
       )
       (i32.load offset=24
        (get_local $2)
       )
      )
     )
    )
    (call $prints
     (i32.const 96)
    )
    (drop
     (call $store_i64
      (i64.const 3316479707209269248)
      (i64.const 632468476610478080)
      (get_local $2)
      (i32.const 28)
     )
    )
    (br $label$0)
   )
   (call $prints
    (i32.const 80)
   )
   (drop
    (call $remove_i64
     (i64.const 3316479707209269248)
     (i64.const 632468476610478080)
     (get_local $2)
    )
   )
  )
  (call $prints
   (i32.const 1344)
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $2)
    (i32.const 80)
   )
  )
 )
 (func $_ZN8exchange26apply_exchange_cancel_sellENS_7OrderIDE (param $0 i32)
  (local $1 i64)
  (local $2 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $2
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 80)
    )
   )
  )
  (call $requireAuth
   (tee_local $1
    (i64.load
     (get_local $0)
    )
   )
  )
  (i64.store
   (i32.add
    (get_local $2)
    (i32.const 56)
   )
   (i64.const 0)
  )
  (i32.store
   (i32.add
    (i32.add
     (get_local $2)
     (i32.const 32)
    )
    (i32.const 12)
   )
   (i32.load
    (i32.add
     (get_local $0)
     (i32.const 12)
    )
   )
  )
  (i32.store
   (i32.add
    (i32.add
     (get_local $2)
     (i32.const 32)
    )
    (i32.const 8)
   )
   (i32.load
    (i32.add
     (get_local $0)
     (i32.const 8)
    )
   )
  )
  (i64.store offset=48
   (get_local $2)
   (i64.const 1)
  )
  (i64.store offset=64
   (get_local $2)
   (i64.const 0)
  )
  (i32.store offset=36
   (get_local $2)
   (i32.load
    (i32.add
     (get_local $0)
     (i32.const 4)
    )
   )
  )
  (i32.store offset=32
   (get_local $2)
   (i32.load
    (get_local $0)
   )
  )
  (call $assert
   (i32.eq
    (call $load_primary_i128i128
     (i64.const 3316479707209269248)
     (i64.const 3316479707209269248)
     (i64.const 925261025006059520)
     (i32.add
      (get_local $2)
      (i32.const 32)
     )
     (i32.const 44)
    )
    (i32.const 44)
   )
   (i32.const 1360)
  )
  (i64.store offset=8
   (get_local $2)
   (i64.const 0)
  )
  (i64.store
   (get_local $2)
   (get_local $1)
  )
  (i64.store offset=16
   (get_local $2)
   (i64.const 0)
  )
  (i32.store offset=24
   (get_local $2)
   (i32.const 0)
  )
  (drop
   (call $load_i64
    (i64.const 3316479707209269248)
    (i64.const 3316479707209269248)
    (i64.const 632468476610478080)
    (get_local $2)
    (i32.const 28)
   )
  )
  (call $assert
   (i64.ge_u
    (i64.add
     (tee_local $1
      (i64.load offset=64
       (get_local $2)
      )
     )
     (i64.load offset=16
      (get_local $2)
     )
    )
    (get_local $1)
   )
   (i32.const 32)
  )
  (i64.store offset=16
   (get_local $2)
   (i64.add
    (i64.load offset=16
     (get_local $2)
    )
    (i64.load offset=64
     (get_local $2)
    )
   )
  )
  (i32.store offset=24
   (get_local $2)
   (i32.add
    (i32.load offset=24
     (get_local $2)
    )
    (i32.const -1)
   )
  )
  (drop
   (call $remove_i128i128
    (i64.const 3316479707209269248)
    (i64.const 925261025006059520)
    (i32.add
     (get_local $2)
     (i32.const 32)
    )
   )
  )
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.eqz
      (i32.or
       (i64.ne
        (i64.or
         (i64.load offset=16
          (get_local $2)
         )
         (i64.load offset=8
          (get_local $2)
         )
        )
        (i64.const 0)
       )
       (i32.load offset=24
        (get_local $2)
       )
      )
     )
    )
    (call $prints
     (i32.const 96)
    )
    (drop
     (call $store_i64
      (i64.const 3316479707209269248)
      (i64.const 632468476610478080)
      (get_local $2)
      (i32.const 28)
     )
    )
    (br $label$0)
   )
   (call $prints
    (i32.const 80)
   )
   (drop
    (call $remove_i64
     (i64.const 3316479707209269248)
     (i64.const 632468476610478080)
     (get_local $2)
    )
   )
  )
  (call $prints
   (i32.const 1408)
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $2)
    (i32.const 80)
   )
  )
 )
 (func $init
 )
 (func $apply (param $0 i64) (param $1 i64)
  (local $2 i32)
  (local $3 i32)
  (local $4 i64)
  (local $5 i64)
  (local $6 i64)
  (local $7 i64)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $8
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 288)
    )
   )
  )
  (set_local $5
   (i64.const 0)
  )
  (set_local $4
   (i64.const 59)
  )
  (set_local $3
   (i32.const 16)
  )
  (set_local $6
   (i64.const 0)
  )
  (loop $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (block $label$5
        (br_if $label$5
         (i64.gt_u
          (get_local $5)
          (i64.const 7)
         )
        )
        (br_if $label$4
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $2
             (i32.load8_s
              (get_local $3)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $2
         (i32.add
          (get_local $2)
          (i32.const 160)
         )
        )
        (br $label$3)
       )
       (set_local $7
        (i64.const 0)
       )
       (br_if $label$2
        (i64.le_u
         (get_local $5)
         (i64.const 11)
        )
       )
       (br $label$1)
      )
      (set_local $2
       (select
        (i32.add
         (get_local $2)
         (i32.const 234)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $2)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $7
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $2)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $7
     (i64.shl
      (i64.and
       (get_local $7)
       (i64.const 31)
      )
      (i64.and
       (get_local $4)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $3
    (i32.add
     (get_local $3)
     (i32.const 1)
    )
   )
   (set_local $5
    (i64.add
     (get_local $5)
     (i64.const 1)
    )
   )
   (set_local $6
    (i64.or
     (get_local $7)
     (get_local $6)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $4
      (i64.add
       (get_local $4)
       (i64.const -5)
      )
     )
     (i64.const -6)
    )
   )
  )
  (block $label$6
   (block $label$7
    (block $label$8
     (block $label$9
      (block $label$10
       (block $label$11
        (block $label$12
         (br_if $label$12
          (i64.ne
           (get_local $6)
           (get_local $0)
          )
         )
         (br_if $label$11
          (i64.gt_s
           (get_local $1)
           (i64.const 1755333687702454271)
          )
         )
         (br_if $label$9
          (i64.eq
           (get_local $1)
           (i64.const -7396951281723506688)
          )
         )
         (br_if $label$7
          (i64.ne
           (get_local $1)
           (i64.const 1545297622141501440)
          )
         )
         (i64.store
          (i32.add
           (get_local $8)
           (i32.const 264)
          )
          (i64.const 0)
         )
         (i64.store offset=256
          (get_local $8)
          (i64.const 1)
         )
         (i64.store offset=248
          (get_local $8)
          (i64.const 0)
         )
         (i64.store offset=240
          (get_local $8)
          (i64.const 0)
         )
         (i64.store offset=272
          (get_local $8)
          (i64.const 0)
         )
         (i32.store8 offset=284
          (get_local $8)
          (i32.const 0)
         )
         (call $assert
          (i32.gt_u
           (call $readMessage
            (i32.add
             (get_local $8)
             (i32.const 240)
            )
            (i32.const 45)
           )
           (i32.const 44)
          )
          (i32.const 1424)
         )
         (drop
          (call $memcpy
           (i32.add
            (get_local $8)
            (i32.const 14)
           )
           (i32.add
            (get_local $8)
            (i32.const 240)
           )
           (i32.const 45)
          )
         )
         (call $_ZN8exchange18apply_exchange_buyENS_8BuyOrderE
          (i32.add
           (get_local $8)
           (i32.const 14)
          )
         )
         (br $label$6)
        )
        (set_local $5
         (i64.const 0)
        )
        (set_local $4
         (i64.const 59)
        )
        (set_local $3
         (i32.const 1472)
        )
        (set_local $6
         (i64.const 0)
        )
        (loop $label$13
         (block $label$14
          (block $label$15
           (block $label$16
            (block $label$17
             (block $label$18
              (br_if $label$18
               (i64.gt_u
                (get_local $5)
                (i64.const 7)
               )
              )
              (br_if $label$17
               (i32.gt_u
                (i32.and
                 (i32.add
                  (tee_local $2
                   (i32.load8_s
                    (get_local $3)
                   )
                  )
                  (i32.const -97)
                 )
                 (i32.const 255)
                )
                (i32.const 25)
               )
              )
              (set_local $2
               (i32.add
                (get_local $2)
                (i32.const 160)
               )
              )
              (br $label$16)
             )
             (set_local $7
              (i64.const 0)
             )
             (br_if $label$15
              (i64.le_u
               (get_local $5)
               (i64.const 11)
              )
             )
             (br $label$14)
            )
            (set_local $2
             (select
              (i32.add
               (get_local $2)
               (i32.const 234)
              )
              (i32.const 0)
              (i32.lt_u
               (i32.and
                (i32.add
                 (get_local $2)
                 (i32.const -49)
                )
                (i32.const 255)
               )
               (i32.const 5)
              )
             )
            )
           )
           (set_local $7
            (i64.shr_s
             (i64.shl
              (i64.extend_u/i32
               (get_local $2)
              )
              (i64.const 56)
             )
             (i64.const 56)
            )
           )
          )
          (set_local $7
           (i64.shl
            (i64.and
             (get_local $7)
             (i64.const 31)
            )
            (i64.and
             (get_local $4)
             (i64.const 4294967295)
            )
           )
          )
         )
         (set_local $3
          (i32.add
           (get_local $3)
           (i32.const 1)
          )
         )
         (set_local $5
          (i64.add
           (get_local $5)
           (i64.const 1)
          )
         )
         (set_local $6
          (i64.or
           (get_local $7)
           (get_local $6)
          )
         )
         (br_if $label$13
          (i64.ne
           (tee_local $4
            (i64.add
             (get_local $4)
             (i64.const -5)
            )
           )
           (i64.const -6)
          )
         )
        )
        (br_if $label$10
         (i64.ne
          (get_local $6)
          (get_local $0)
         )
        )
        (set_local $5
         (i64.const 0)
        )
        (set_local $4
         (i64.const 59)
        )
        (set_local $3
         (i32.const 1488)
        )
        (set_local $6
         (i64.const 0)
        )
        (loop $label$19
         (block $label$20
          (block $label$21
           (block $label$22
            (block $label$23
             (block $label$24
              (br_if $label$24
               (i64.gt_u
                (get_local $5)
                (i64.const 7)
               )
              )
              (br_if $label$23
               (i32.gt_u
                (i32.and
                 (i32.add
                  (tee_local $2
                   (i32.load8_s
                    (get_local $3)
                   )
                  )
                  (i32.const -97)
                 )
                 (i32.const 255)
                )
                (i32.const 25)
               )
              )
              (set_local $2
               (i32.add
                (get_local $2)
                (i32.const 160)
               )
              )
              (br $label$22)
             )
             (set_local $7
              (i64.const 0)
             )
             (br_if $label$21
              (i64.le_u
               (get_local $5)
               (i64.const 11)
              )
             )
             (br $label$20)
            )
            (set_local $2
             (select
              (i32.add
               (get_local $2)
               (i32.const 234)
              )
              (i32.const 0)
              (i32.lt_u
               (i32.and
                (i32.add
                 (get_local $2)
                 (i32.const -49)
                )
                (i32.const 255)
               )
               (i32.const 5)
              )
             )
            )
           )
           (set_local $7
            (i64.shr_s
             (i64.shl
              (i64.extend_u/i32
               (get_local $2)
              )
              (i64.const 56)
             )
             (i64.const 56)
            )
           )
          )
          (set_local $7
           (i64.shl
            (i64.and
             (get_local $7)
             (i64.const 31)
            )
            (i64.and
             (get_local $4)
             (i64.const 4294967295)
            )
           )
          )
         )
         (set_local $3
          (i32.add
           (get_local $3)
           (i32.const 1)
          )
         )
         (set_local $5
          (i64.add
           (get_local $5)
           (i64.const 1)
          )
         )
         (set_local $6
          (i64.or
           (get_local $7)
           (get_local $6)
          )
         )
         (br_if $label$19
          (i64.ne
           (tee_local $4
            (i64.add
             (get_local $4)
             (i64.const -5)
            )
           )
           (i64.const -6)
          )
         )
        )
        (br_if $label$6
         (i64.ne
          (get_local $6)
          (get_local $1)
         )
        )
        (i64.store offset=152
         (get_local $8)
         (i64.const 0)
        )
        (call $assert
         (i32.gt_u
          (call $readMessage
           (i32.add
            (get_local $8)
            (i32.const 136)
           )
           (i32.const 24)
          )
          (i32.const 23)
         )
         (i32.const 1424)
        )
        (call $_ZN8exchange23apply_currency_transferERKN8currency8TransferE
         (i32.add
          (get_local $8)
          (i32.const 136)
         )
        )
        (br $label$6)
       )
       (br_if $label$8
        (i64.eq
         (get_local $1)
         (i64.const 1755333687702454272)
        )
       )
       (br_if $label$7
        (i64.ne
         (get_local $1)
         (i64.const 1755333696554205184)
        )
       )
       (i64.store offset=168
        (get_local $8)
        (i64.const 0)
       )
       (i64.store offset=160
        (get_local $8)
        (i64.const 0)
       )
       (call $assert
        (i32.gt_u
         (call $readMessage
          (i32.add
           (get_local $8)
           (i32.const 160)
          )
          (i32.const 16)
         )
         (i32.const 15)
        )
        (i32.const 1424)
       )
       (i64.store
        (i32.add
         (get_local $8)
         (i32.const 128)
        )
        (i64.load offset=168
         (get_local $8)
        )
       )
       (i64.store offset=120
        (get_local $8)
        (i64.load offset=160
         (get_local $8)
        )
       )
       (call $_ZN8exchange26apply_exchange_cancel_sellENS_7OrderIDE
        (i32.add
         (get_local $8)
         (i32.const 120)
        )
       )
       (br $label$6)
      )
      (set_local $5
       (i64.const 0)
      )
      (set_local $4
       (i64.const 59)
      )
      (set_local $3
       (i32.const 1504)
      )
      (set_local $6
       (i64.const 0)
      )
      (loop $label$25
       (block $label$26
        (block $label$27
         (block $label$28
          (block $label$29
           (block $label$30
            (br_if $label$30
             (i64.gt_u
              (get_local $5)
              (i64.const 2)
             )
            )
            (br_if $label$29
             (i32.gt_u
              (i32.and
               (i32.add
                (tee_local $2
                 (i32.load8_s
                  (get_local $3)
                 )
                )
                (i32.const -97)
               )
               (i32.const 255)
              )
              (i32.const 25)
             )
            )
            (set_local $2
             (i32.add
              (get_local $2)
              (i32.const 160)
             )
            )
            (br $label$28)
           )
           (set_local $7
            (i64.const 0)
           )
           (br_if $label$27
            (i64.le_u
             (get_local $5)
             (i64.const 11)
            )
           )
           (br $label$26)
          )
          (set_local $2
           (select
            (i32.add
             (get_local $2)
             (i32.const 234)
            )
            (i32.const 0)
            (i32.lt_u
             (i32.and
              (i32.add
               (get_local $2)
               (i32.const -49)
              )
              (i32.const 255)
             )
             (i32.const 5)
            )
           )
          )
         )
         (set_local $7
          (i64.shr_s
           (i64.shl
            (i64.extend_u/i32
             (get_local $2)
            )
            (i64.const 56)
           )
           (i64.const 56)
          )
         )
        )
        (set_local $7
         (i64.shl
          (i64.and
           (get_local $7)
           (i64.const 31)
          )
          (i64.and
           (get_local $4)
           (i64.const 4294967295)
          )
         )
        )
       )
       (set_local $3
        (i32.add
         (get_local $3)
         (i32.const 1)
        )
       )
       (set_local $5
        (i64.add
         (get_local $5)
         (i64.const 1)
        )
       )
       (set_local $6
        (i64.or
         (get_local $7)
         (get_local $6)
        )
       )
       (br_if $label$25
        (i64.ne
         (tee_local $4
          (i64.add
           (get_local $4)
           (i64.const -5)
          )
         )
         (i64.const -6)
        )
       )
      )
      (br_if $label$6
       (i64.ne
        (get_local $6)
        (get_local $0)
       )
      )
      (set_local $5
       (i64.const 0)
      )
      (set_local $4
       (i64.const 59)
      )
      (set_local $3
       (i32.const 1488)
      )
      (set_local $6
       (i64.const 0)
      )
      (loop $label$31
       (block $label$32
        (block $label$33
         (block $label$34
          (block $label$35
           (block $label$36
            (br_if $label$36
             (i64.gt_u
              (get_local $5)
              (i64.const 7)
             )
            )
            (br_if $label$35
             (i32.gt_u
              (i32.and
               (i32.add
                (tee_local $2
                 (i32.load8_s
                  (get_local $3)
                 )
                )
                (i32.const -97)
               )
               (i32.const 255)
              )
              (i32.const 25)
             )
            )
            (set_local $2
             (i32.add
              (get_local $2)
              (i32.const 160)
             )
            )
            (br $label$34)
           )
           (set_local $7
            (i64.const 0)
           )
           (br_if $label$33
            (i64.le_u
             (get_local $5)
             (i64.const 11)
            )
           )
           (br $label$32)
          )
          (set_local $2
           (select
            (i32.add
             (get_local $2)
             (i32.const 234)
            )
            (i32.const 0)
            (i32.lt_u
             (i32.and
              (i32.add
               (get_local $2)
               (i32.const -49)
              )
              (i32.const 255)
             )
             (i32.const 5)
            )
           )
          )
         )
         (set_local $7
          (i64.shr_s
           (i64.shl
            (i64.extend_u/i32
             (get_local $2)
            )
            (i64.const 56)
           )
           (i64.const 56)
          )
         )
        )
        (set_local $7
         (i64.shl
          (i64.and
           (get_local $7)
           (i64.const 31)
          )
          (i64.and
           (get_local $4)
           (i64.const 4294967295)
          )
         )
        )
       )
       (set_local $3
        (i32.add
         (get_local $3)
         (i32.const 1)
        )
       )
       (set_local $5
        (i64.add
         (get_local $5)
         (i64.const 1)
        )
       )
       (set_local $6
        (i64.or
         (get_local $7)
         (get_local $6)
        )
       )
       (br_if $label$31
        (i64.ne
         (tee_local $4
          (i64.add
           (get_local $4)
           (i64.const -5)
          )
         )
         (i64.const -6)
        )
       )
      )
      (br_if $label$6
       (i64.ne
        (get_local $6)
        (get_local $1)
       )
      )
      (i64.store offset=152
       (get_local $8)
       (i64.const 0)
      )
      (call $assert
       (i32.gt_u
        (call $readMessage
         (i32.add
          (get_local $8)
          (i32.const 136)
         )
         (i32.const 24)
        )
        (i32.const 23)
       )
       (i32.const 1424)
      )
      (call $_ZN8exchange18apply_eos_transferERKN3eos8TransferE
       (i32.add
        (get_local $8)
        (i32.const 136)
       )
      )
      (br $label$6)
     )
     (i64.store
      (i32.add
       (get_local $8)
       (i32.const 216)
      )
      (i64.const 0)
     )
     (i64.store offset=208
      (get_local $8)
      (i64.const 1)
     )
     (i64.store offset=200
      (get_local $8)
      (i64.const 0)
     )
     (i64.store offset=192
      (get_local $8)
      (i64.const 0)
     )
     (i64.store offset=224
      (get_local $8)
      (i64.const 0)
     )
     (i32.store8 offset=236
      (get_local $8)
      (i32.const 0)
     )
     (call $assert
      (i32.gt_u
       (call $readMessage
        (i32.add
         (get_local $8)
         (i32.const 192)
        )
        (i32.const 45)
       )
       (i32.const 44)
      )
      (i32.const 1424)
     )
     (drop
      (call $memcpy
       (i32.add
        (get_local $8)
        (i32.const 59)
       )
       (i32.add
        (get_local $8)
        (i32.const 192)
       )
       (i32.const 45)
      )
     )
     (call $_ZN8exchange19apply_exchange_sellENS_9SellOrderE
      (i32.add
       (get_local $8)
       (i32.const 59)
      )
     )
     (br $label$6)
    )
    (i64.store offset=184
     (get_local $8)
     (i64.const 0)
    )
    (i64.store offset=176
     (get_local $8)
     (i64.const 0)
    )
    (call $assert
     (i32.gt_u
      (call $readMessage
       (i32.add
        (get_local $8)
        (i32.const 176)
       )
       (i32.const 16)
      )
      (i32.const 15)
     )
     (i32.const 1424)
    )
    (i64.store
     (i32.add
      (get_local $8)
      (i32.const 112)
     )
     (i64.load offset=184
      (get_local $8)
     )
    )
    (i64.store offset=104
     (get_local $8)
     (i64.load offset=176
      (get_local $8)
     )
    )
    (call $_ZN8exchange25apply_exchange_cancel_buyENS_7OrderIDE
     (i32.add
      (get_local $8)
      (i32.const 104)
     )
    )
    (br $label$6)
   )
   (call $assert
    (i32.const 0)
    (i32.const 1456)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 288)
   )
  )
 )
)
)=====";
