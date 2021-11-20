use std::{env, io::Write, process::exit, str, str::FromStr};

const INT32_MAX_LEN: usize = "-2147483648".len();

fn main() {
    let args = env::args().collect::<Vec<_>>();
    if args.len() != 2 {
        eprintln!("USAGE: proj-2 number");
        exit(1);
    }

    let n = i32::from_str(&args[1]).unwrap();

    const PREFIX: &str = "STRING #";
    const ARR_SIZE: usize = PREFIX.len() + INT32_MAX_LEN + 1;

    let mut b: [u8; ARR_SIZE] = [0; ARR_SIZE];
    let _ = write!(&mut b[..], "{}", PREFIX);

    let mut idx = PREFIX.len();
    for i in 0..n {
        let _ = write!(&mut b[PREFIX.len()..], "{}", i);
        if *(unsafe { b.get_unchecked(idx + 1) }) != 0 {
            idx += 1;
        }

        let s = unsafe { str::from_utf8_unchecked(&b[..=idx]) };
        println!("{}", s);
    }
}
