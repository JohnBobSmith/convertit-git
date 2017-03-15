# Maintainer: David "JohnBobSmith" Bogner <myrunescapeemail609 AT gmail DOT com>
pkgname=convertit-git
pkgver=r10.4bed830
pkgrel=1
pkgdesc="A small utility for converting measurements (Temperature, Metric, Imperial)"
arch=(x86_64)
makedepends=('git')
url="https://github.com/JohnBobSmith/convertit-git"
license=('MIT')
source=("git+https://github.com/JohnBobSmith/convertit-git.git")
md5sums=('SKIP')

pkgver() {
  cd "$pkgname"
  printf "r%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"
}

build() {
	cd "$pkgname/src/"
	make
}

package() {
	cd "$pkgname"
	install -D -m644 LICENSE "${pkgdir}/usr/share/licenses/${pkgname}/LICENSE"
	install -D -m755 "src/convertit" "${pkgdir}/usr/bin/convertit"
}
