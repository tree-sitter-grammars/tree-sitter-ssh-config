fn main() {
    let src_dir = std::path::Path::new("src");

    let mut c_config = cc::Build::new();
    c_config.std("c11").include(src_dir);

    #[cfg(target_env = "msvc")]
    c_config.flag("-utf-8").flag("-wd4189");

    #[cfg(not(target_env = "msvc"))]
    c_config.flag("-Wno-unused-variable");

    let parser_path = src_dir.join("parser.c");
    c_config.file(&parser_path);

    c_config.compile("parser");
    println!("cargo:rerun-if-changed={}", parser_path.to_str().unwrap());
}
