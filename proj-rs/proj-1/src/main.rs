use std::{env, process::exit, str::FromStr};

fn main() {
    let args = env::args().collect::<Vec<_>>();
    if args.len() != 2 {
        eprintln!("USAGE: proj-1 number");
        exit(1);
    }

    let n = i32::from_str(&args[1]).unwrap();
    for i in 0..n {
        let s = format!("STRING #{}", i);
        println!("{}", &s);
    }
}
